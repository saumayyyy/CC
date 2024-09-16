#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==0)return 0;
        unordered_map<int,int>mpp;

        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            mpp[a]++;
        }
        for(int i = 0;i<n;i++){
            int d;
            cin>>d;
            mpp[d]++;
        }

        int ans = 1;
        for(auto it : mpp){
            ans = max(ans,it.second);
        }
        cout<<ans<<endl;
    }
    return 0;
}