#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        string j,s;
        cin>>j>>s;

        unordered_map<char,int>mpp;
        for(int i = 0;i<j.length();i++){
            mpp[j[i]]++;
        }

        ll cnt = 0;
        for(int i = 0;i<s.length();i++){
            if(mpp.find(s[i])!=mpp.end())cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}