#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int n;
        cin>>n;
        vector<int>set1;
        vector<int>set2;

        ll total = (ll)n*(n+1);
        total/=2;

        if(total&1){
            cout<<"NO"<<endl;
            return 0;
        }
        ll needed = total/2;
        vector<int>available(n+1);
        for(int i = 1;i<=n;i++)available[i]=i;
        int ind = n;
        while(ind>=1){
            if(needed==0)break;
            if(available[ind]<=needed){
                set1.push_back(available[ind]);
                needed-=available[ind];
                available[ind] =-1;
            }
            ind--;
        }
        for(int i = 1;i<=n;i++){
            if(available[i]!=-1){
                set2.push_back(available[i]);
            }
        }
        cout<<"YES"<<endl;
        cout<<set1.size()<<endl;
        for(auto it : set1)cout<<it<<" ";
        cout<<endl;
        cout<<set2.size()<<endl;
        for(auto it : set2)cout<<it<<" ";
    return 0;
}

/*
7-> check total sum if odd->No
find target sum for 1 half
7*(7+1)/2 = 28 =>half will be 14
we need 14 in one set
lets try greedy
1 2 3 4 5 6 7

14 = 7 6 1
14 = 2 3 4 5

8->36
18 => 8 7 3
18 => 1 2 4 5 6

Jab totalSum ka aadha humne greedily bna diya toh baaki ke numbers bhi toh
totalSum ka doosra aadha part bnaenge
*/