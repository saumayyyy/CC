#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        ll ans = 0;
        for(int i = 1;i<=n;i+=2){
            ans += (ll)(n-(i-1))*(n-(i-1));
        }
        cout<<ans<<endl;
        
    }
    return 0;
}


/*
n*n
1 -> n*n         =>64
2 -> (n-1)*(n-1)
3 -> (n-2)*(n-2) =>36
4 -> (n-3)*(n-3)
5 -> (n-4)*(n-4) =>16
6 -> (n-5)*(n-5)
7 -> (n-6)*(n-6) => 4
8 -> (n-7)*(n-7)
*/