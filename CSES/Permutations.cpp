#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int n;
    cin>>n;

    if(n==1){
        cout<<1;
    }
    else if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }
    else{

        vector<int>ans;
        for(int i = 1;i<n;i+=2){
            ans.push_back(i+1);
        }
        for(int i = 0;i<n;i+=2){
            ans.push_back(i+1);
        }
        for(int i = 0;i<n;i++){
            cout<<ans[i]<<" ";
        }
    }
    
    return 0;
}