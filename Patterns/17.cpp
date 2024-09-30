#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    //space-char-space
    int n = 4;
    //j->2n-1 => spaces = n-1, n-2, n-3...
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        //characters
        char c = 'A';
        for(int j = 0;j<2*i+1;j++){
            cout<<c;
            if(j<i)c++;
            else c--;
        }
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

return 0;
}