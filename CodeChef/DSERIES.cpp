#include <bits/stdc++.h>

using namespace std;
long result[10000] = {0};
long fact_dp(int n)
{
    if (n >= 0)
    {
        result[0] = 1;
        for (int i = 1; i <= n; ++i)
        {
            result[i] = i * result[i - 1];
        }
        return result[n];
    }
}
/*long factorial(long n)
{
    int res = 1, i;
    for (i=2; i<=n; i++)
        res *= i;
    return res;

}*/
int main(){
    long q,n,t,a,sum,i,j;
    cin>>q;
    for(i=0;i<q;i++){
        cin>>n>>t;
        sum=0;
        a=fact_dp(1+t);
        for(j=1;j<n;j++){
            sum=sum+a;
            a=a*(j+t)/j;
        sum=sum%1000000007;
        }
        cout<<sum;}
        //cout<<fact_dp(5);








return 0;
}
