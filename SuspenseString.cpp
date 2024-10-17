#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char alice,bob;
        int i = 0,j = n-1;
        string t;
        while(i<=j){
            alice = s[i++];
            if(alice=='0'){
                t = alice + t;
            }
            else t = t + alice;
            if(i<=j){
                bob = s[j--];
                if(bob=='0'){
                    t = t + bob;
                }
                else t = bob + t;
            }
        }
        cout<<t<<endl;
    }
    return 0;
}

/*
10 => 01 or 10 => bob's turn so larger value =10

0001 => 0 => 10 => 010 =>0100

1 => 0 => 10 => 101 => 1101 => 01101 => 101101

Alice places 1 at last, 0 at front
Bob places 1 at front, 0 at last


*/