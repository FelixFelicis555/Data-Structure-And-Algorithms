#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
 ll t,n,v;
 cin>>t;
 while(t--){
    cin>>n;
    int a[n];
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    int f=0;
    for(int i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(m[a[i]*a[j]]!=0){
                f++;
            }
        }
    }
    ll p=n-1;
    p=(p*(p+1))/2;
    if(f==p){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }


 }





}
