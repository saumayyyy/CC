#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b) 
{ 
    // Everything divides 0 
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
  
    // base case 
    if (a == b) 
        return a; 
  
    // a is greater 
    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
} 


typedef long long ll;
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
        ll ans = arr[0];
        for(int i = 1;i<n;i++){
            ans = gcd(ans,arr[i]);
        }

        if(ans==1){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        } 
        
    }
    return 0;
}