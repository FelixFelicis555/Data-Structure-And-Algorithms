d#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n,v;
    ll m;
    cin>>n>>m;
    vector<pair<ll,ll>>a;
    vector<pair<ll,ll>>b;
    for(ll i=0;i<n;i++){
       cin>>v;
       a.push_back(make_pair(v,i));
    }
    for(ll i=0;i<m;i++){
       cin>>v;
       b.push_back(make_pair(v,i));
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll lim=n+m-1;
    ll c=0;
    if(a[0].first>b[0].first){
        for(int i=0;i<m;i++){
            cout<<a[0].second<<" "<<b[i].second<<endl;
        }
        for(int j=1;j<n;j++){
            cout<<a[j].second<<" "<<b[m-1].second<<endl;
        }
    }
    else if(a[0].first<=b[0].first){
        for(int i=0;i<n;i++){
            cout<<a[i].second<<" "<<b[0].second<<endl;
        }
        for(int j=1;j<m;j++){
            cout<<a[n-1].second<<" "<<b[j].second<<endl;
        }
    }






}
