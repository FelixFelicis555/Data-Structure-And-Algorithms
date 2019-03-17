#include<bits/stdc++.h>
using namespace std;
int main(){
 float t,q,p,exp;
 cin>>t;
 while(t--){
    cin>>q>>p;
    exp=q*p;
    if(q>1000){
        exp=exp-(0.1)*exp;
    }
    cout<<fixed<<setprecision(6)<<exp<<endl;
 }


}
