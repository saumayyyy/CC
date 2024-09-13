#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int n;
    cin>>n;
    int prev = 0;
    int curr = 0;
    ll moves = 0;

    for(int i = 0;i<n;i++){
        int a;
        cin>>a;

        if(i==0){
            prev = a;
        }
        else{
            curr = a;
            if(prev>curr){
                moves+=(prev-curr);
            }
            else prev = curr;
        }
    }
    cout<<moves;
return 0;
}