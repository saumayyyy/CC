#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n;
        cin>>n;
        unordered_map<char,int>mpp1,mpp2;

        string parent = a+b;
        for(int i = 0;i<parent.length();i++){
            mpp1[parent[i]]++;
        }

        bool flag = false;
        for(int i = 0;i<n;i++){
            string s;
            cin>>s;
            for(int j = 0;j<s.length();j++){
                mpp2[s[j]]++;
                if((mpp1.find(s[j])==mpp1.end())||(mpp2[s[j]]>mpp1[s[j]])){
                    flag = true;
                    break;
                }
            }
            if(flag)continue;
        }
        if(!flag){
            cout<<"YES"<<endl;
        } 
        else cout<<"NO"<<endl;
    }
    return 0;
}