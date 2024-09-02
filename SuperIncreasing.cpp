#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;

        cin>>n>>k>>x;

        if(k==1 && x>=1){
            cout<<"Yes"<<endl;
            continue;
        }
        long long sum = pow(2ll,k-1);
        
        if(x>=sum){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}
