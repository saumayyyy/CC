#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        ll maxi = 0;
        for(int i = 0;i<n;i++){
            ll a;
            cin>>a;
            if(i==0)maxi+=a;
            else maxi += (a-1);
        }   
        cout<<maxi<<endl;
    }
    return 0;
}


/*



*/