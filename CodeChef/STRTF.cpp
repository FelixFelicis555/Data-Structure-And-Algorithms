#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll n,q,k,a,x;
cin>>n>>q;
vector<ll>v;
for(ll i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
}

for(ll i=0;i<q;i++){
    cin>>k>>x;
    if(k%2==0){
        ll x1=v[x-1];
        ll x2=v[x-1+k];
        cout<<(x1^x2)<<endl;
    }
    else{
        ll ans=0;
        for(ll j=x-1;j<=(x+k-1);j++){
        ans=ans^v[j];
        }
        cout<<ans<<endl;
    }
}




}
