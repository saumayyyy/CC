#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,y;
        cin>>n>>y;
        int curr_or = 0;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            curr_or = (curr_or | a);
        }
        int ans = 0;
        bool flag = false;
        for(int i = 0;i<y+1;i++){
            if((curr_or | i) == y){
                ans = i;
                flag = true;
                break;
            }
        }
        if(!flag)cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}