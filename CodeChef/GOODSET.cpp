//1,2,4,7,10,13,16,19,22,25,28,31,34
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
 ll t,n;
 vector<ll>v;
 v.push_back(1);
 v.push_back(2);
 v.push_back(4);
    ll vv=7;
    while(vv<=500){
        v.push_back(vv);
        vv+=3;
    }
 cin>>t;
 while(t--){
    cin>>n;
    for(ll i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;




 }



}
