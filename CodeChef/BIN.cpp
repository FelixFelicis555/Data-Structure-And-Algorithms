#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int noOfOperation(int k,unsigned long long a,unsigned long long b){
if(a==b)
    return 0;
else if(b==0)
    return -1;
else if(b==1)
{
    return ( a == 0 ? 1 : -1 );
}
else{
    if(k>0){
        return k;
    }
    else{

        return 2;
    }
}}
int noOfzeros(unsigned long long n){
int num,z=0;
bool check=true;
if(n==0){
    return 1;
}
while(n){
    num=n%2;
    n=n/2;
    if(check){
        if(num==0){
          z=z+1;
        }
        else{
            check=false;
            return z;
        }
    }
} }
int main(){
    int t;
    unsigned long long a,b,b1;
    cin>>t;
    while(t--){
    cin>>a>>b;
    int cc=noOfzeros(b);
    int ca=__builtin_popcount(a);
    int cb=__builtin_popcount(b);
    int k=cb-ca+cc;
    int ans=noOfOperation(k,a,b);
    cout<<ans<<endl;



    }
return 0;
}
