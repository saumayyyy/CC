#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        string rev_str = str;
        reverse(str.begin(),str.end());
        if(str==rev_str)cout<<1<<endl;
        else cout<<2<<endl;
        
    }
    return 0;
}