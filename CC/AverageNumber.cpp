#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,v;
        cin>>n>>k>>v;
        int sum = 0;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            sum+=a;
        }

        int deleted_val = (v*(n+k));
        deleted_val-=sum;
        if(deleted_val<0 || deleted_val%k){
            cout<<-1<<endl;
        }
        else{
            cout<<deleted_val/k<<endl;
        }
    }
    return 0;
}

/*

n3 k3 v4

[2,8,3]
sum = 13
x = (v*(n+k) - sum(arr))/k

(24 - 13)/3 = 11/3

*/