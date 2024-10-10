#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        ll num_a = 0,num_b = 0, both = 0;
        for(ll i = 0;i<n;i++){
            ll s;
            cin>>s;
            if(s%a==0 && s%b==0)both++;
            else if(s%a==0)num_a++;
            else if(s%b==0)num_b++;
            
        }

        if(both==0){
            if(num_a>num_b){
                cout<<"BOB"<<endl;
            }
            else{
                cout<<"ALICE"<<endl;
            }
        }
        else{
            if(num_b>num_a){
                cout<<"ALICE"<<endl;
            }
            else{
                cout<<"BOB"<<endl;
            }
        }  
    }
    return 0;
}

/*
a-bob b-alice

num_div_a = c1-c3//Bob can take
num_div_b = c2-c3//Alice can take
num_div_both = c3->even hoga toh Bobs turn
                    num_div_a>num_div_b ->Bob wins
                    num_div_a <= num_div_b->Alice wins
                 ->odd hoga to Alice turn
                    num_div_b>num_div_a->Alice wins
                    else Bob wins
 */