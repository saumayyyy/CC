#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt_0 = 0;
        int cnt_1 = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='1'){
                cnt_1++;
            }
            else cnt_0++;
        }
        int ans = 0;
        for(int i = 1;i<=n;i++){
            if((i>=cnt_0 && (i-cnt_0)%2==0) || (i>=cnt_1 && (i-cnt_1)%2==0)){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}