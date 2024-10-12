#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x==1){
            cout<<1<<endl;
            continue;
        }
        //x = 9
        int stationDist = 1;//10
        int time = 1; //4
        while(stationDist < x){
            time++;
            stationDist+=time;
        }
        //now we have just greater or equal to station
        int distBack = abs(stationDist - x);
        int distForward = abs(x - (stationDist - time));

        int actualTime = min(time + distBack, time-1+distForward);
        cout<<actualTime<<endl;
    }
    return 0;
}


/*
0(house)  1  2   3    4     5      6       7
x = 9

station 1 = 1
station 2 = 3
station 3 = 6
station 4 = 10......walk 1 back => 5


at every point find next distance......if(>x) then walk till there 

*/