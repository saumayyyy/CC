#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int i = 0;
        while(k--){
            int smallest = arr[i];
            int largest = arr[n-1];

            arr[n-1] = smallest + largest;
            i++;
        }

        for(int j = i;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}