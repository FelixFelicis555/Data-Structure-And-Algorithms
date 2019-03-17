#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
 ll t,n,s,p;

 cin>>t;
 while(t--){
    cin>>n;
    int a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll c=0;
    for(ll i=0;i<n;i++){
        s=0;
        p=1;
        for(ll j=i;j<n;j++){
           s+=a[j];
           p*=a[j];
           if(s==p){
               // cout<<i<<" "<<j<<endl;
            c++;
           }

        }
    }
    cout<<c<<endl;




 }





}
