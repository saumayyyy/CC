#include<bits/stdc++.h>
using namespace std;

void checkValid(string s){
    for(int i = 0;i<s.length()-1;i+=2){
        if((s[i]=='A' && s[i+1]!='B') || (s[i]=='B' && s[i+1]!='A')){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        checkValid(s);
    }
    return 0;
}