#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    vector<int>freq(26,0);
    for(int i = 0;i<n;i++){
        freq[s[i]-'A']++;
    }
    int cnt = 0;
    for(int i = 0;i<26;i++){
        if(freq[i]&1)cnt++;
    }
    if(cnt>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    string ans = "";
    for(int i = 0;i<26;i++){
        if(freq[i]&1 ^ 1){
            for(int j = 0;j<freq[i]/2;j++){
                ans+= (char)(i+'A');
            }
        }
    }
    cout<<ans;
    for(int i = 0;i<26;i++){
        if(freq[i]&1){
            for(int j = 0;j<freq[i];j++){
                cout<<(char)(i+'A');
            }
            break;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    cout<<endl;
    return 0;
}