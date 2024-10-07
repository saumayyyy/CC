#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll x = abs(x);
        ll y = abs(y);
        ll ans = 0;
        if(x==y){
            cout<<x+y<<endl;
            continue;
        }
        if(x<y){
            ans = 2*x;
            ll diff = y-x;
            ll times = diff/2;
            ans+=times*4;
            if(diff&1)ans++;
        }
        else{
            ans = 2*y;
            ll diff = x-y;
            ll times = diff/2;
            ans+=times*4;
            if(diff&1)ans+=3;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}

/*



*/