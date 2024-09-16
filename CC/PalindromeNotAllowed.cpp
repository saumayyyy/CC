#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s = "";
        char a = 'a';
        for(int i = 0;i<n;i++){
            s.push_back(a);
            int num = a-'a';
            num++;
            num%=26;
            a = num + 'a';
        }
        cout<<s<<endl;
        
    }
    return 0;
}