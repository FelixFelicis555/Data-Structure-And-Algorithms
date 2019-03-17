#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll t,n,k,q,a;
cin>>t;
while(t--){
    cin>>n>>k>>q;
    vector<pair<ll,ll>>v;
    vector<ll>v1;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    /*for(int i=0;i<n;i++){
        cout<<v[i].first<<" ";
    }
    cout<<endl;*/
    ll h=0;
    while(h<q){
            //cout<<h<<endl;
        auto it1=v.begin();
        auto it2=v.begin()+1;
        ll k=it1->first+it2->first;
        ll i=min(it1->second,it2->second);
        ll j=max(it1->second,it2->second);
        if(it1->second==i){
            it1->first=k;
            v.erase(it2);
        }
        else{
            it2->first=k;
    //cout<<"h"<<endl;
            v.erase(it1);
        }
        if(v.size()<=1){
            break;
        }
        h++;
        /*for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" ";
    }
    cout<<endl;*/

    }
    /*for(int i=0;i<n;i++){
        cout<<v[i].first<<" ";
    }
    cout<<endl;*/
    ll pro=1;
    for(int i=0;i<k;i++){
        if(i<v.size()){
        pro=pro*v[i].first;}
    }
    cout<<pro<<endl;


}


}
