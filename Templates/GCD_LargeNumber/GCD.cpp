#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long long moduloMultiplication(long long a,long long b,
long long mod)
{
    long long res = 0;
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

long long int calpow( long long int A,long long  int B, long long int M )
{
	 if(B == 0)
            return 1;
	if(B%2==0)
	    return calpow(moduloMultiplication(A,A,M),B/2,M);
	else
	    return moduloMultiplication(A,calpow(moduloMultiplication(A,A,M),B/2,M),M);

}
long long int find_ans(long long int a,long long int b,long long int n){
    long long int x1=0,x2=0,x3,ans;
    x3=abs(a-b);
    if(a==b){
        x1=calpow(a,n,m);
        x2=calpow(b,n,m);
        return ((x1+x2)%m);
    }
    x1=calpow(a,n,x3);
    x2=calpow(b,n,x3);
    ans=__gcd((x1+x2)%x3,x3)%m;
    return ans;


}
int main(){
long long int a,b,n,t,x1,x2,x3,ans;
cin>>t;

while(t--){

    cin>>a>>b>>n;
    ans=find_ans(a,b,n);
    cout<<ans<<endl;

    }


}



