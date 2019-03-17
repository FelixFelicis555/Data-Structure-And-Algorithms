#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long int
long long moduloMultiplication(long long a,long long b,long long mod)
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

ll gcd(ll small, ll large)
{
    int64_t temp;
    if (large < small)
    {
        temp = large;
        large = small;
        small = temp;
    }
    while (small)
    {
        temp = small;
        small = large % small;
        large = temp;
    }
    return large % MOD;
}
ll power(ll a, ll r, ll div)
{
    ll ans = 1;
    while (r > 0)
    {
        if (r % 2)
        {
            //ans = (ans * a) % div;
            ans=moduloMultiplication(ans,a,div);
        }
        r = r >> 1;
        //a = (a * a) % div;
        a=moduloMultiplication(a,a,div);
    }
    return ans % div;
}
int main()
{
    // std::sync_with_stdio(0);
    ll t;
    cin>>t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        if (a == b)
        {
            ll an = power(a, n, MOD);
            ll bn = power(b, n, MOD);
            cout << (an + bn) % MOD << "\n";
            continue;
        }
        ll diff = abs(a - b);
        ll an = power(a, n, diff);
        ll bn = power(b, n, diff);
        ll s = (an + bn) % diff;
        cout<<__gcd(s,diff)%MOD<<"\n";
    }
    return 0;
}
