#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
     ll k=pow(n,0.5);
     ll l=k+1;
    ll k1=k*k;
    ll l1=l*l;
    ll k2=n-k1;
    ll l2=l1-n;
    if(k2<l2){
        cout<<k<<endl;
    }
    else{
        cout<<l<<endl;
    }

}
