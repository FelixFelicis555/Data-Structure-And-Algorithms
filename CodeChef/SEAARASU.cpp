#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 ll t,n,a;
 cin>>t;
 while(t--){
    vector<ll>v;
    cin>>n;
    ll k;
    for(ll j=0;j<n;j++){
        cin>>a;
        v.push_back(a);

    }
    k=__gcd(v[0],v[1]);
    for(ll j=3;j<v.size();j++){
        k=__gcd(v[j],k);
    }


    cout<<n*k<<endl;



 }
}
