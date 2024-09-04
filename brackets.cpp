#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int maxBalance = 0;
        int balance = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='('){
                    balance++;
            }
            else {
                if(balance!=0){
                    balance--;
                }
            }
            maxBalance = max(balance,maxBalance);
        }

        string res = "";
        for(int i = 0;i<maxBalance;i++){
            res.push_back('(');
        }
        for(int i = 0;i<maxBalance;i++){
            res.push_back(')');
        }

        cout<<res<<endl;
        
    }
    return 0;
}