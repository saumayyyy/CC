#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>Sloth(3,0);
        vector<int>Dragon(3,0);
        int sum1=0,sum2=0;
        
        for(int i = 0;i<3;i++){
            cin>>Dragon[i];
            sum2+=Dragon[i];
        }
        for(int i = 0;i<3;i++){
            cin>>Sloth[i];
            sum1+=Sloth[i];
        }

        if(sum1!=sum2){
            (sum1>sum2)?cout<<"SLOTH":cout<<"DRAGON";
            cout<<endl;
        }
        else{
            if(Sloth[0]!=Dragon[0]){
                (Sloth[0]>Dragon[0])?cout<<"SLOTH":cout<<"DRAGON";
                cout<<endl;
            }
            else{
                if(Sloth[1]!=Dragon[1]){
                    (Sloth[1]>Dragon[1])?cout<<"SLOTH":cout<<"DRAGON";
                    cout<<endl;
                }
                else{
                    cout<<"TIE"<<endl;
                }
            }
        }        
    }
    return 0;
}