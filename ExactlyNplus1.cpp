#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n,vector<ll>& ans){
    if(n==1){
        ans.push_back(1);
        ans.push_back(1);
        return;
    }
    solve(n-1,ans);
    ll val = pow(2,n-1);
    ans.push_back(val);
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>ans;
        solve(n,ans);
        for(int i = 0;i<n+1;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
n = 1 =>1,1
n = 2 =>1,1,2
n = 3 =>1,1,2,4
n = 4 =>1,1,2,4,8
n = 5 =>1,1,2,4,8,16
*/