#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }


        vector<int>freq(n+1,0);
        bool flag = false;
        int val = arr[0];
        for(int i = 0;i<n;i++){
            if(arr[i]!=val)flag=true;
            freq[arr[i]]++;
        }

        if(!flag){
            for(int i = 0;i<n;i++){
                if(freq[i]!=0){
                    cout<<(freq[i]*(freq[i]-1))/2<<endl;
                    break;
                }
            }
        }
        else{
            int freq0 = freq[0];
            int ele = -1;
            int maxFreq = 0;
            for(int i = 1;i<n;i++){
                if(freq[i]>maxFreq){
                    ele = i;
                    maxFreq = freq[i];
                }
            }
            freq[ele]+=freq0;

            int ans = 0;
            for(int i = 1;i<n;i++){
                ans += (freq[i]*(freq[i]-1))/2;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}