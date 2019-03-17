#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t,n1,n2,m;
cin>>t;
while(t--)
{
    cin>>n1>>n2>>m;
    long long int a=(m*(m+1))/2;
    long long int b=min(n1,n2);
    cout<<n1+n2-2*min(a,b)<<endl;


}
}







