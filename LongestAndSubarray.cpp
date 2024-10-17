#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll mul = 1;
        while(mul<n){
            mul*=2;
        }
        if(n==mul){
            cout<<(n-(mul/2))<<endl;
        }
        else{
            cout<<max(n-(mul/2)+1,(mul/2 - mul/4))<<endl;
        }  
    }
    return 0;
}

/*
ans = 8;
n = 15
mul = 16
pow = 4

15-8+1


*/