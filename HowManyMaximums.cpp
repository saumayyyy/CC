#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;
        int cnt = 0;

        if(s[0]=='1')cnt++;
        if(s[n-2]=='0')cnt++;

        for(int i = 1;i<n-2;i++){
            if(s[i]=='0' && s[i+1]=='1')cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

/*

10=>1

01=>2


*/