#include <bits/stdc++.h>
using namespace std;
int findprime(int n){
int cprime=0;
for(int i=2;i*i<=n;++i){
    if(n%i==0){
        cprime+=1;
        while(n%i==0){
            n=n/i;
        }
    }

}
if(n>1)
    cprime+=1;
return cprime;


}
int main(){
int t,n,m,sum;
cin>>t;
while(t--){
    cin>>n>>m;
    sum=0;
    for(int k=n;k<m;k++){
        int p=findprime(k);
        //cout<<p<<endl;
        sum=sum+p;
    }
    cout<<sum<<endl;


}






return 0;

}
