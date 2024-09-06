#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(int a, int b) 
{ 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 

    return result; 
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);

        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        ll ans = LLONG_MAX;
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                if(arr[i]!=arr[j]){
                    ans = min(ans,gcd(arr[i],arr[j]));
                } 
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*
3,7,8,5,4

 */