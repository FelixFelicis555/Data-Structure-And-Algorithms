#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
 ll t,n,k;
 cin>>t;
 while(t--){
    cin>>n;
    int a[100000]={0};
    for(ll i=0;i<n;i++){
        cin>>k;
        a[k-1]++;
    }
    for(ll i=0;i<100000;i++){
        if(a[i]%2!=0){
            cout<<i+1<<endl;
            break;
        }
 }
}}
