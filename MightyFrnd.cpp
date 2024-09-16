#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>tomu,motu;
        

        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            if(i%2==0){
                motu.push_back(a);
            }
            else tomu.push_back(a);
        }

        sort(tomu.begin(),tomu.end(),greater<int>());
        sort(motu.begin(),motu.end());

        int i = tomu.size()-1;
        int j = motu.size()-1;

        while(k-- && i>=0 && j>=0){
            if(tomu[i]<motu[j]){
                swap(tomu[i--],motu[j--]);
            }
        }
        ll tomuSum = 0,motuSum = 0;
        int p;
        for(p = 0;p<n/2;p++){
            tomuSum+=tomu[p];
            motuSum+=motu[p];
        }
        if(n&1){
            motuSum+=motu[p];
        }

        if(tomuSum>motuSum){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
}

/*
find k largest on even index
and k smallest on odd index

add them to the answer
*/