#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int n = 5;
    //total = 2*n
    for(int i = 5;i>0;i--){
        //spaces 5->0, 4->2, 3->4...(2*n-2*i)spaces
        for(int j = 0;j<i;j++)cout<<"*";
        for(int j = 0;j<(2*n-2*i);j++)cout<<" ";
        for(int j = 0;j<i;j++)cout<<"*";
        cout<<endl;
    }

    for(int i = 1;i<=5;i++){
        for(int j = 0;j<i;j++)cout<<"*";
        for(int j = 0;j<(2*n-2*i);j++)cout<<" ";
        for(int j = 0;j<i;j++)cout<<"*";
        cout<<endl;
    }
    return 0;
}