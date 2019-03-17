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
    for(int i=l;i<=r;i++){
        x^=i;
    }
    if(x%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;

    }
}





}
