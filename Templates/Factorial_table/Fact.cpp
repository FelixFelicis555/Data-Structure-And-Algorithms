#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int fact[101];
    fact[0]=1;
    for(int i=1;i<=100;i++){
        fact[i]=fact[i-1]*i;
    }
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<fact[n]<<endl;
    }





}
