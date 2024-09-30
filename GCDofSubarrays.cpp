#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll total = (n*(n+1))/2;
        if(k<total){
            cout<<-1<<endl;
        }
        else{
            for(int i = 0;i<n-1;i++){
                cout<<1<<" ";
            }
            cout<<k - total + 1;
            cout<<endl;
        }        
    }
    return 0;
}

/*
1 to N
sum of gcd's of each subarray.
no. of elements = n,requiredSum = k

if all 1s then sum of gcd = n(n+1)/2
if(k<sum)-1
else 2,4
1 1

4
3 -> sum when all ones
n(n+1)/2 -1 + ele = k
k - n(n+1)/2 + 1 = ele

n = 7
total = 28
k = 28
*/