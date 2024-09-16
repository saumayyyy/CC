#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void findWays(ll k){
    if(k==1){
        cout<<0<<endl;
    }
    else if(k==2){
        cout<<(k*k)*(k*k -1)/2<<endl;
    }
    else{
        //no. of 2*3 and 3*2 grids in the board
        //each 2*3 grid and 
        //no.of 2*3 = (n-2+1)*(n-3+1) => (n-2)(n-1)
        //no. of 3*2 = (n-1)*(n-2)
        //no.of squares = n*n(n*n-1)/2 - 2*(n-2)(n-1)*2
        ll total = k*k*(k*k -1)/2;
        ll ans = total - 4*(k-1)*(k-2);
        cout<<ans<<endl;
    } 
}

int main(){
    int n;
    cin>>n;

    for(ll i = 1;i<=n;i++){
        findWays(i);
    }
    return 0;
}