#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        ll num = 1;
        int a = max(x,y);
        ll last_skip = a-2;
        ll total_skips = last_skip*(last_skip+1)/2;
        total_skips+=(a-1);
        while(total_skips--){
            num+=2;
        }  
        //we have the value of y,y
        if(x==y){
            cout<<num<<endl;
        }
        else if(x>y){
            ll diff = x-y;
            if(x&1){
                while(diff--){
                    num--;
                }
            }
            else{
                while(diff--){
                    num++;
                }
            }
            cout<<num<<endl;
        }
        else{
            ll diff = y-x;
            if(y&1){
                while(diff--){
                    num++;
                }
            }
            else{
                while(diff--){
                    num--;
                }
            }
            cout<<num<<endl;
        }
        
    }
    return 0;
}