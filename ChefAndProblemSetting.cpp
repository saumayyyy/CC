#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string ans = "FINE";
        while(n--){
            string s,tc;
            cin>>s>>tc;
            bool flag = true;
            for(int i = 0;i<tc.length();i++){
                if(tc[i]=='0'){
                    flag =false;
                }
            }
            if(ans == "INVALID")continue;
            if(s=="correct" && !flag){
                ans = "INVALID";
            }
            else if(s=="wrong" && flag){
                ans = "WEAK";
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}