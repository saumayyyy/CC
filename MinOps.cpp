#include<bits/stdc++.h>
using namespace std;


void findMinOps(int l,int r,int k,vector<int>& arr){

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;

        vector<int>arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            findMinOps(l,r,k,arr);
        }
        
    }
    return 0;
}

/*
arr = 1 6 4

l = 1, r= 3, k = 1



*/