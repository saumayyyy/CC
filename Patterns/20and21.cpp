#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int n = 5;
    // int spaces = 2*n -2;
    // for(int i = 1;i<=2*n-1;i++){
    //     //stars
    //     int stars = i;
    //     if(i>n)stars = 2*n-i;
    //     for(int j = 0;j<stars;j++)cout<<"*";
    //     //spaces
    //     for(int j = 0;j<spaces;j++)cout<<" ";
    //     if(i<n)spaces-=2;
    //     else spaces+=2;
    //     //stars
    //     for(int j = 0;j<stars;j++)cout<<"*";
    //     cout<<endl;
    // }
    for(int i = 0;i<n;i++){
        if(i==0 || i==n-1){
            for(int j = 0;j<n;j++)cout<<"*";
            cout<<endl;
            continue;
        }
        cout<<"*";
        for(int j = 0;j<n-2;j++)cout<<" ";
        cout<<"*";
        cout<<endl;
    }

return 0;
}