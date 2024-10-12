#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n&1){
            cout<<n<<" ";
            int i = 1,j = n-1;
            while(i<=j){
                cout<<i++<<" ";
                cout<<j--<<" ";
            }
        }
        else{
            int i = 1,j = n;
            while(i<=j){
                cout<<i++<<" ";
                cout<<j--<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}


/*
Goodness of subarray-> k means that 
array can spit into k subarrays with same sum

n -> array => 1 to n
goodness should be maximum

->minimum sum possible = n

n = 1 => [1] 
n = 2 => [1,2]
n = 3 => [1,2,3]
n = 4 => [1,2,3,4] => [1,4] [2,3] k = 2
n = 5 => [1,2,3,4,5] => [1,4] [2,3] [5] k = 3
n = 6 => [1,2,3,4,5,6] => [1,6] [2,5] [3,4] k = 3 
..........for n->even just pair first and last element together
            n->odd take n as 1 and pair others
*/