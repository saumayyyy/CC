#include<bits/stdc++.h>
using namespace std;

void checkATM(vector<int>&arr,int k,int n){
    for(int i = 0;i<n;i++){
        if(arr[i]<=k){
            cout<<1;
            k-=arr[i];
        }
        else cout<<0;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n,0);
        for(int i = 0 ;i<n;i++){
            cin>>arr[i];
        }
        checkATM(arr,k,n);
    }
    return 0;
}