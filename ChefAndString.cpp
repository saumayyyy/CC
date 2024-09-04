#include<bits/stdc++.h>
using namespace std;



string left(string &s){
    string res = s;
    int n = s.length();
    char fst = s[0];
    for(int i = 1;i<s.length();i++){
        res[i-1] = res[i];
    }
    res[n-1] = fst;
    return res;
}

string right(string &s){
    string res = s;
    int n = s.length();
    char lst = s[n-1];
    for(int i = n-2;i>=0;i--){
        res[i+1] = res[i];
    }
    res[0] = lst;
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()<=2){
            cout<<"YES"<<endl;
        }
        else {
            string s1 = left(s);
            string s2 = right(s);

            if(s1==s2){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        
    }
    return 0;
}


/*
abca




*/