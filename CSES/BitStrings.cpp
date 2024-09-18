#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int t;
    cin>>t;

    ll ans = 1;
    for(int i =1 ;i<=t;i++){
        ans = 2*(ans)%((int)1e9+7);
    }
    cout<<ans<<endl;

return 0;
}