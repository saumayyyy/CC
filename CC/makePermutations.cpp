#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr,int n){
    for(int i = 0;i<n;i++){
            if(arr[i]>i+1){
                cout<<"NO"<<endl;
                return;
            }
            else{
                continue;
            }
        }
    cout<<"YES"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        solve(arr,n); 
    }
    return 0;
}