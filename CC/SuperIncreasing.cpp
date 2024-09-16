#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;

        cin>>n>>k>>x;
        
        if(x>=pow(2ll,k-1)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}
