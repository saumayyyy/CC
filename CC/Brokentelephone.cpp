#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int cnt = 0;
        vector<bool> vis(n, false); 

        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i-1]) { 
                if (!vis[i]) {        
                    cnt++;
                    vis[i] = true;
                }
                if (!vis[i-1]) {      
                    cnt++;
                    vis[i-1] = true;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
