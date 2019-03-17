#include<bits/stdc++.h>
using namespace std;
int main(){
int t,a,b;
cin>>t;
while(t--){
    cin>>a>>b;
    cout<<__gcd(a,b)<<" "<<(a*b)/__gcd(a,b)<<endl;
}}
