#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
 ll t,n;
 vector<ll>v;
 ll sum=1;
 n=1;
 while(sum<=1000000000){
    v.push_back(sum);
    n++;
    sum=(n*(n+1))/2;
 }
 v.push_back(sum);
 cin>>t;
 while(t--){
    cin>>n;
    for(ll i=0;;i++){
        if((v[i]<=n)&&(v[i+1]>n)){
            cout<<i+1<<endl;
            break;
        }
    }
 }


}
