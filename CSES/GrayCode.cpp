#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int index,int n,vector<string>& temp){
    if(index==n){
        return;
    }
    vector<string>ans;
    int a = temp.size();
    for(int i = 0;i<a;i++){
        ans.push_back("0" + temp[i]);
    }
    reverse(temp.begin(),temp.end());
    for(int i = 0;i<a;i++){
        ans.push_back("1" + temp[i]);
    }
    temp = ans;
    solve(index+1,n,temp);
}

int main(){
    int t;
    cin>>t;
    vector<string>temp = {"0","1"};
    if(t==1){
        cout<<"0"<<endl;
        cout<<"1"<<endl;
        return 0;
    }
    solve(1,t,temp);
    for(ll i = 0;i<temp.size();i++){
        cout<<temp[i]<<endl;
    }
return 0;
}