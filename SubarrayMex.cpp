#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>ans(n,0);
        if(k<x){
            cout<<-1<<endl;
            continue;
        }

        for(int i = 0;i<n;i++){
            cout<<i%x<<" ";
        }
        cout<<endl;   
    }
    return 0;
}
/*
n=9 k=3 x=4
means 0,1,2,3 are present.=>[0,1,2,3,0,1,2,3,0]

4 3 2
[0 , 1,0 ,1 ]

mex = 2
minimum missing should be 2
->each window of size k should have 0 and 1

5 4 5

[ 0,1 ,2 ,3 ,0 ]
0,1,2,3,4

if(windowsize < x)return -1
*/