#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>votes_cnt(n,0);

        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            if(a-1==i){
                votes_cnt[i]+=(-1e3);
            }
            else{
                votes_cnt[a-1]++;
            }
        }

        int students = 0;
        for(int i = 0;i<n;i++){
            if(votes_cnt[i]>=k)students++;
        }

        cout<<students<<endl;

        
    }
    return 0;
}