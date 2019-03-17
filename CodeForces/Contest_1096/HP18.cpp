#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int t;
    ll n,a,b,v;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
       int ca=0;//bob
       int cb=0;//alice
       int cc=0;
        for(ll i=0;i<n;i++){
            cin>>v;
            if(v!=0){
            if(((v%a)==0)&&((v%b)==0)){
               cc++;
            }
            else if(((v%a)==0)&&((v%b)!=0)){
               ca++;//bob
            }
            else if(((v%a)!=0)&&((v%b)==0)){
                cb++;//alice
            }
            }

        }
        if(cc==0){
            if(cb>=ca){
                cout<<"ALICE"<<endl;
            }
            else{
                cout<<"BOB"<<endl;
            }
        }
        else{
            ca++;
            if(cb>=ca){
                cout<<"ALICE"<<endl;
            }
            else{
                cout<<"BOB"<<endl;
            }

        }
    }}
