#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        vector<int>cnt(10);
        for(int i = 0;i<n;i++){
            for(int j = 0;j<10;j++){
                if(arr[i][j]=='1')cnt[j]++;
            }
        }
        int ans = 0;
        for(int i = 0;i<10;i++){
            if(cnt[i]&1){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


/*


1
3
1110001101 => 6
1010101011 => 6
0000000011 => 2
 */

