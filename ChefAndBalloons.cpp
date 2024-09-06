#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int r,g,b,k;
        cin>>r>>g>>b>>k;

        int red = (r>=k)?k-1:r;
        int green = (g>=k)?k-1:g;
        int blue = (b>=k)?k-1:b;
        cout<<(long long int)(red + green + blue + 1)<<endl;
        
    }
    return 0;
}