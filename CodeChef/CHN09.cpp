#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
 ll t,n;
 cin>>t;
 string s;
 while(t--){
   cin>>s;
   ll na=0;
   ll nb=0;
   for(ll i=0;i<s.size();i++){
    if(s[i]=='a'){
        na++;
    }
    if(s[i]=='b'){
        nb++;
    }
   }
   cout<<min(na,nb)<<endl;
 }}
