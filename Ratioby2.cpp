#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        int ops1 = abs(2*x - y);
        int ops2 = abs(2*y - x);

        if(x>=2*y || y>=2*x){
            cout<<0<<endl;
        }
        else{
            cout<<(min(ops1,ops2)+1)/2<<endl;
        }
    }
return 0;
}