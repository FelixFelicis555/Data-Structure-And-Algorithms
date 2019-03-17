#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int pow1(ll x, ll y, ll p)
{
    int res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
int main(){

ll n,e,s,val;
cin>>s;
cin>>n;
cin>>e;

val=s;
ll val1 = pow1(val,e,n);
ll i=1;
ll pre;
while(val1!=val){
    pre=val1;
    i++;
    val1=pow1(val1,e,n);
}

cout<<"Plaintext : "<<pre<<endl;
ll ch=pre;
cout<<"Check"<<endl;
ll check = pow1(ch,e,n);
cout<<"Value get "<<check<<endl;








}
