#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,a,k=0,p,q;
 cin>>n;
 map<int,int>m;
 cin>>p;
 for(int i=0;i<p;i++){
    cin>>a;
    m[a]++;

 }
 cin>>q;
 for(int i=0;i<q;i++){
    cin>>a;
    m[a]++;
 }

 int flag=0;
 for(int i=1;i<=n;i++){
    if(m[i]==0){
        cout<<"Oh, my keyboard!"<<endl;
        flag=1;
        break;
    }
 }
 if(flag==0){
    cout<<"I become the guy."<<endl;
 }







}
