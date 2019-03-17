#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t,n,m,x,y,p,k,k1,k2;
cin>>t;
while(t--){
    cin>>n>>m>>x>>y;
    if(((n-1)%x==0)&&((m-1)%y==0)){
        cout<<"Chefirnemo"<<endl;
    }
    else if(((n-2)%x==0)&&(m-2)%y==0){
        if(((n-2)>=0)&&((m-2)>=0))
        cout<<"Chefirnemo"<<endl;
        else{
           cout<<"Pofik"<<endl;
        }
    }
    else{
        cout<<"Pofik"<<endl;
    }

}}
