#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll d, x, y;
void ExtEuclied(ll A, ll B){
    if(!B){
        d = A; x = 1; y = 0;
    }
    else{
        ExtEuclied(B, A%B);
        ll temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

ll ModInverse(ll A, ll M){
    ExtEuclied(A, M);
    return ((x%M) + M)%M;
}
int main(){
ll n,q,a,b;
cin>>n>>q;
map<ll,ll>m;
for(ll i=0;i<n;i++){
    cin>>a>>b;
    ll s=4*a*b+2*max(a,b);
    m[s]++;

}
ll ss;
ll M=1000000009;
vector<ll>k;
for(ll i=0;i<q;i++){
    cin>>ss;
    k.push_back(ss);


}
/*for(int i=0;i<k.size();i++){
    cout<<k[i]<<endl;
}*/
for(int i=0;i<k.size();i++){
    int dd=k[i]*(k[i]+1);
    if(m[dd]==0){
        cout<<"-1"<<endl;
    }
    else{
      ll Inv = ModInverse(m[dd], M);
      cout<<Inv<<endl;
    }
}
}
