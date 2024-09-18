#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll numberOf5s(int n){
    ll cnt = 0;
    while(n%5==0){
        n = n/5;
        cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    ll cnt = 0;
    for(int i = 1;i<=n;i++){
        cnt+=numberOf5s(i);
    }
    cout<<cnt<<endl;
    return 0;
}

/*
all  multiples of 5 with a even number
for every multiple of 5 we will have a even number
Hence count multiple of 5s

*/