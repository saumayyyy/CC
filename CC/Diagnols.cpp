#include <bits/stdc++.h>
using namespace std;

int minNumber(int n, int k){
    vector<int>poss;
    poss.push_back(n);
    for(int i = n-1;i>0;i--){
        poss.push_back(i);
        poss.push_back(i);
    }
    int cnt = 0;
    for(auto it : poss){
        if(k<=0)break;
        int mini = min(k,it);
        k-=mini;
        cnt++;
    }
    return cnt;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<minNumber(n,k)<<endl;
    }
    return 0;
}