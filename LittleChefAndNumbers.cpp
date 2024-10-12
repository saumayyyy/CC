#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>arr;
        for(int i = 0;i<n;i++){
            ll a;
            cin>>a;
            arr.push_back(a);
        }
        ll cnt0 = 0,cnt1 =0 ,cnt2 = 0;
        for(int i = 0;i<n;i++){
            if(arr[i]==0)cnt0++;
            else if(arr[i]==1)cnt1++;
            else if(arr[i]==2)cnt2++;
        }
        
        ll val = n - cnt0 - cnt1;
        ll ans = (val * (val-1)/2);
        ans -= (cnt2 * (cnt2-1)/2);
        cout<<ans<<endl;
        
        
    }
    return 0;
}


/*
ai * aj > ai + aj

for all ai or aj >=3 this will be true
0 with anything will not be a pair
1 with anything will not be a pair
2 with all greater than 2 will make a pair.

count   num2
        num>2


1 1 1 3 4 5

*/