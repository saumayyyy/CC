#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        if(k&1){
            if(n&1){
                cout<<"Odd"<<endl;
            }
            else{
                cout<<"Even"<<endl;
            }

        }
        else{
            if(n==1){
                if(k&1){
                    cout<<"Odd"<<endl;
                }
                else cout<<"Even"<<endl;
            }
            else cout<<"Impossible"<<endl;
        }
        
    }
    return 0;
}

/*

if AND ->even
    means end bit is 0=>means there can be 0s and 1s in the end of digits
    Not possible to tell the sum as even or odd


AND->odd
    means end bit is 1=>all numbers have 1 in their end bit
    odd numbers summed even times->even
    odd numbers summed odd times -> odd
    if(n is even then sum is even)
    else sum is odd

*/