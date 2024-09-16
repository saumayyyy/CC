#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
    int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);

        if(n==3){
            cout<<1<<" "<<2<<" "<<3<<" "<<endl;
        }
        else{
            arr[0] = n;
            arr[n-1] = n-1;
            arr[1] = n-2;
            arr[n-2] = n-3;

            for(int i = 2;i<n-2;i++){
                arr[i] = i-1;
            } 

            for(int i = 0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}


/*
n=6

1 2 3 4 5 6 7 8

123 234 345 456 567 678

1->1
2->2


3->3
4->3
5->3
6->3


7->2
8->1

*/