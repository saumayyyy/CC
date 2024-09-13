#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    string s;
    cin>>s;

    ll maxi = 1;
    ll maxCnt = 1;
    char c = s[0];
    for(ll i = 1;i<s.length();i++){
        if(s[i]==c){
            maxi++;
            maxCnt = max(maxCnt,maxi);
        }
        else{
            maxi = 1;
            c = s[i];
        }
    }
    cout<<maxCnt;
return 0;
}