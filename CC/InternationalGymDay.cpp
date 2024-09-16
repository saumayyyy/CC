#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int d,x,y;
        cin>>d>>x>>y;
        int k = 0;
        bool flag = false;
        if(y>=x){
            cout<<k<<endl;
        }
        else{
            while(k<=101){
                int val = min(k*d,100);
                double remaining = x * (100-val)/100.0;
                if(y-k>=remaining){
                    cout<<k<<endl;
                    flag = true;
                    break;
                }
                k++;
            }
            if(!flag)cout<<-1<<endl;
        }
    }
    return 0;
}

/*
 y- = x-(k*d)*x/100;

k*x*d/100 = x-y

k = 100(x-y)/x*d


 */
