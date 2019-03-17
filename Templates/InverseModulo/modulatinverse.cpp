#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll d, x, y;
ll ModExp(ll A, ll B, ll M){
    if(B == 0) return 1;
    else if(B%2 == 0) return ModExp(((A%M)*(A%M))%M, B/2, M);
    else return (A*ModExp((A*A)%M,(B-1)/2,M))%M;
}

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
    ll A, B , N, M = 1000000007;
    int t;
    cin>>t;
    while(t--){
    cin >> A >> B>>N;
    ll A1=ModExp(A, N, M);
    ll B1=ModExp(B, N, M);
    cout<<A1<<" "<<B1<<endl;
    //ll Inv = ModInverse(C, M);
//    cout << ((Exp%M)*(Inv%M))%M;
}}
