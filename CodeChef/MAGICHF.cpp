#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t,n,x,s,a,f,sec;
cin>>t;
while(t--){
     cin>>n>>x>>s;
    long long int cur=x;
    for(long long int i=0;i<s;i++){
        cin>>f>>sec;
        if(f==cur){
            cur=sec;
        }
        else if(sec==cur){
            cur=f;
        }
    }
    cout<<cur<<endl;

}}
