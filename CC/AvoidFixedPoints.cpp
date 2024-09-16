#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n+1);
        for(int i = 1;i<=n;i++){
            cin>>arr[i];
        }

        int inc = 0;
        for(int i = 1;i<=n;i++){
            if(arr[i] == i+inc)inc++;
        }
        cout<<inc<<endl;
        
    }
    return 0;
}