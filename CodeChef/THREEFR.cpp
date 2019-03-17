#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if((x+y+z)==0){
            cout<<"YES"<<endl;
        }
        else if((-x-y-z)==0){
            cout<<"YES"<<endl;
        }
        else if((-x-y+z)==0){
            cout<<"YES"<<endl;
        }
        else if((-x+y-z)==0){
            cout<<"YES"<<endl;
        }
        else if((-x+y+z)==0){
            cout<<"YES"<<endl;
        }
        else if((x-y-z)==0){
            cout<<"YES"<<endl;
        }
        else if((x-y+z)==0){
            cout<<"YES"<<endl;
        }
        else if((x+y-z)==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }}
