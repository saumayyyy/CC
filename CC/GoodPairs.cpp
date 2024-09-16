#include<bits/stdc++.h>
using namespace std;

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

        long long ans = 0;
        for(auto it : mpp){
            ans += (long long)((it.second * (it.second-1))/2);
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*
k^2 = a1 * a2;

a1 == a2
*/