#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>arr(n,{0,0});
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            arr[i].first = a;
        }
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            arr[i].second = a;
        }
        sort(arr.begin(),arr.end(),[](pair<int,int> &A,pair<int,int> &B){
            return A.first<B.first;
        });

        priority_queue<int,vector<int>,greater<int>>pq;
        pq.push(arr[0].second);
        int maxRooms = 1;
        for(int i = 1;i<n;i++){
            int arvl = arr[i].first;
            int dept = arr[i].second;
            while(!pq.empty() && arvl>=pq.top())pq.pop();
            pq.push(dept);
            maxRooms = max(maxRooms,(int)pq.size());
        }
        cout<<maxRooms<<endl;
        
    }
    return 0;
}

/*
(2,9)(5,6)(6,18)(8,9)(10,11)(12,15)(13,19)
=>whenever arrival(curr)>=minDeparture ->pop until mindepartue is greater
then push departue(curr)
=>if(arrival(curr)<mindeparture)push departure curr in pq
min-heap => [18,15,19]
minDeparture=15
rooms => pq.size() => 3
maxRooms => 3 => max(rooms,maxRooms)
*/