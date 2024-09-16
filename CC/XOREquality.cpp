#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mod = 1e9+7;
        ll ans = 1;
        int p = n-1;
        ll x = 2;
        while(p>0){
            if(p&1){
                ans = (ans*x)%mod;
                p--;
            }
            else{
                x = (x*x)%mod;
                p/=2;
            }
        }

        cout<<ans<<endl;  
    }
    return 0;
}
/*
x+1 should be odd
x should be even
2 ^ n-1
*/