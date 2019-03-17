#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Mod 1000000007
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll moduloMultiplication(ll a,ll b,ll mod)
{
    ll res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        a = (2 * a) % mod;

        b >>= 1;
    }

    return res;
}
ll calpow( ll A,ll B, ll M )
{
	 if(B == 0)
            return 1;
	if(B%2==0)
	    return calpow(moduloMultiplication(A,A,M),B/2,M);
	else
	    return moduloMultiplication(A,calpow(moduloMultiplication(A,A,M),B/2,M),M);

}
int main(){
ll t,n,a,b,c;
FAST;
cin>>t;
while(t--){
    cin>>n;
    ll sum;
    n=n%Mod;
    sum=calpow(2,n-1,Mod)%Mod;
    ll ss=moduloMultiplication(sum,n,Mod);


    cout<<ss<<endl;

}}
