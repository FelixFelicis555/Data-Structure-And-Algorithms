#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
bool isPrime(ll n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;

    for (ll i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}
int main() {
    FAST;
    ll t,f1,f2,a,b,c,k;
    cin>>t;
    while(t--){
    	cin>>f1>>f2;
    	c=0;
    	if(isPrime(f1)){
    		c++;
    		//cout<<f1<<endl;
    	}
    	if(isPrime(f2)){
    		c++;
    		//cout<<f2<<endl;
    	}
    	a=f1;
    	b=f2;
    	for(int i=1;i<=18;i++){
    		if(isPrime(a+b)){
    			c++;
    			//cout<<a+b<<endl;
    		}
    		k=a;
    		a=b;
    		b=k+b;
    	}
    	cout<<c<<endl;
    }

}
