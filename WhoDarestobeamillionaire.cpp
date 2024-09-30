#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string correct,given;
        cin>>correct>>given;
        vector<ll>points(n+1);
        for(int i = 0;i<n+1;i++){
            cin>>points[i];
        }
        ll cnt = 0;
        ll maxi = 0;
        for(int i = 0;i<correct.length();i++){
            if(correct[i]==given[i]){
                cnt++;
                maxi = max(maxi,cnt);
            }
        }
        if(maxi == n){
            cout<<points[n]<<endl;
            continue;
        }
        ll ans = 0;
        for(int i = 0;i<=maxi;i++){
            ans = max(ans,points[i]);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}