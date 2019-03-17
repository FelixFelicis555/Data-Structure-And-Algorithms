#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 ll t,n,a;
 cin>>t;
 vector<ll>v1;
 vector<ll>v2;
 v1.push_back(1);
 for(int i=1;i<=12;i++){
        v1.push_back(v1[i-1]*4-1);
    }
 v2.push_back(1);
 for(int i=1;i<=11;i++){
        v2.push_back(v2[i-1]*4+1);
    }
    vector<ll>tt;
 while(t--){
    cin>>n;
    tt.push_back(n);}
    for(int i=0;i<tt.size();i++){
        ll val=pow(2,tt[i]);
    if(tt[i]%2==0){

        cout<<v2[tt[i]/2-1]<<" "<<val<<" ";
    }
    else{
        cout<<v1[tt[i]/2]<<" "<<val<<" ";
    }}


 }


