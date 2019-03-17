#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    FAST;
ll t,r,l;
cin>>t;
while(t--){
    cin>>l>>r;
    ll x=0;
    ll n=r;
    if(n%4==0){
        x=n;
    }
    else if(n%4==1){
        x=1;
    }
    else if(n%4==2){
        x=n+1;
    }
    else if(n%3==0){
        x=0;
    }
    ll y=0;
    n=l-1;
    if(n%4==0){
        y=n;
    }
    else if(n%4==1){
        y=1;
    }
    else if(n%4==2){
        y=n+1;
    }
    else if(n%3==0){
        y=0;
    }
    x=x^y;
    if(x%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;

    }
}





}
