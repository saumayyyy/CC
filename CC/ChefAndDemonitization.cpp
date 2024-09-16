#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,n;

        cin>>s>>n;
        if(s==1)cout<<1<<endl;
        else if(s&1){
            if(n>s)cout<<2<<endl;
            else{
                cout<<s/n + 2<<endl;
            }
        }
        else{
            if(s<=n)cout<<1<<endl;
            else if(s%n==0)cout<<s/n<<endl;
            else cout<<s/n + 1<<endl;
        }
        
    }
    return 0;
}

/*
s->even{
    N : <s ==> s/N + 1
    N : =s ==>return 1
    N : >s ==>return 1
}
s->odd
    N: >s ==> return 2
    N: <s ==> s/N + 2
*/
