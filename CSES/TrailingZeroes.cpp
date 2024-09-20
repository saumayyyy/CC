#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void numberOf5s(int n,ll &cnt){
        for(int i = 5;i<=n;i*=5){
            cnt += n/i;
        }
    
}

int main(){
    int n;
    cin>>n;
    ll cnt = 0;
    numberOf5s(n,cnt);
    cout<<cnt<<endl;
    return 0;
}

/*
all  multiples of 5 with a even number
for every multiple of 5 we will have a even number
Hence count multiple of 5s

*/