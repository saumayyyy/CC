#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>mpp;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            mpp[a]++;
        }
        ll ans = INT_MAX;
        for(auto it : mpp){
            ans = min(ans,(ll)(it.first * (n-it.second)));
        }
        ans = min(ans,(ll)n);
        cout<<ans<<endl;   
    }
return 0;
}