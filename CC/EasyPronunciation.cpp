#include<bits/stdc++.h>
using namespace std;

bool isNotVowel(char c){
    if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u')return false;
    return true;
}

string isEasy(string &s,int n){
    int c_cnt = 0;
    for(int i = 0;i<n;i++){
        if(isNotVowel(s[i])){
            c_cnt++;
            if(c_cnt>=4)return "NO";
        }
        else{
            c_cnt = 0;
        }
    }
    return "YES";
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        string s;
        cin>>n>>s;
        cout<<isEasy(s,n)<<endl;
    }
    return 0;
}