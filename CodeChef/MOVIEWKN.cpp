#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t,n,l,r;
   cin>>t;
   while(t--){
    cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        cin>>l>>r;

        v.push_back(make_pair(l*r,r));
    }
    sort(v.begin(),v.end());

   }







}
