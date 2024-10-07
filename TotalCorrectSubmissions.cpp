#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string,int>mpp;
        for(int i =  0;i<3*n;i++){
            string key;
            cin>>key;
            int num;
            cin>>num;
            mpp[key]+=num;
        }
        vector<int>ans;
        for(auto it : mpp){
            ans.push_back(it.second);
        }
        sort(ans.begin(),ans.end());
        for(int i = 0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
        
    }
    return 0;
}