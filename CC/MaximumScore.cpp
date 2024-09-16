#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int zero_cnt = 0,one_cnt = 0;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            if(a==1)one_cnt++;
            else zero_cnt++;
        }

        cout<<min(zero_cnt,one_cnt)<<endl;
        
        
    }
    return 0;
}