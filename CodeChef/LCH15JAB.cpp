#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
 ll t,n;
 cin>>t;
 while(t--){
    string s;
    cin>>s;
    ll h[26]={0};
    for(ll i=0;i<s.size();i++){
        //cout
        h[s[i]-'a']++;
    }
    ll sum=0;
    for(int i=0;i<26;i++){
       sum+=h[i];
    }
    //cout<<sum<<endl;
    int f=0;
    for(ll i=0;i<26;i++){
        if(h[i]==(sum-h[i])){
            cout<<"YES"<<endl;
            f=1;
            break;
        }
    }
    if(f==0){
      cout<<"NO"<<endl;
    }



} }
