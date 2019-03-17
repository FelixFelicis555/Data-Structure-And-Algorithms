#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        ll k=10*x;
        ll flag=0;
        for(ll i=0;i<10000;i++){
            if(x==y){
                cout<<x<<endl;
                flag=1;
                break;
            }
            if((k+i)%y==0){
                cout<<(k+i)<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"-1"<<endl;
        }




    }




}
