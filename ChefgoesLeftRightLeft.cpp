#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        vector<int>arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        int s = 0,e = INT_MAX;
        bool flag = true;
        for(int i = 0;i<n-1;i++){
            if(arr[i+1]<arr[i] && arr[i+1]>s){
                e = arr[i];
            }
            else if(arr[i+1]>arr[i] && arr[i+1]<e){
                s = arr[i];
            }
            else{
                flag = false;
            }
        } 
        if(flag){
            cout<<"YES"<<endl;
        } 
        else cout<<"NO"<<endl;
    }
    return 0;
}

/*
s = 600=>300=>300
e = 600=>300=>350
not in range -> NO
5123 3300 783 1111 700 890
s = 5123=>3300=>700
e = 5123=>3300=>783
*/