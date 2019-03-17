#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
 ll t,n,x1,x2,y1,y2;
 cin>>t;
 while(t--){
        cin>>x1>>y1>>x2>>y2;
        if(y1==y2&&x2>x1){
            cout<<"right"<<endl;
        }
        else if(y1==y2&&x2<x1){
            cout<<"left"<<endl;
        }
        else if(x1==x2&&y2>y1){
            cout<<"up"<<endl;
        }
        else if(x1==x2&&y2<y1){
            cout<<"down"<<endl;
        }
        else{
            cout<<"sad"<<endl;
        }





 }}
