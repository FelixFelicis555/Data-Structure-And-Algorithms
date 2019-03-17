#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll t,n,k,a,c;
cin>>t;
while(t--){
    cin>>n>>k;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    c=k;
    a=v[k-1];
    ll j=k;
    while(v[j]==a){
        c++;
        j++;
    }
    cout<<c<<endl;

}


}
