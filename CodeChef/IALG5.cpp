#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,r,i;
cin>>n>>k>>r;
int sum=0;
int nn=0;
int b=k;
int l=1;
int flag=0;
for( i=1;i<=n;i++){
    if(b>=(r*l)){
        sum+=r*l;
        b=b-(r*l);
        l++;
    }
    else{
       cout<<n-i+1<<endl;
       flag=1;
       break;
    }
}
cout<<i<<endl;
if(flag==0&&((i-1)==n)){
    cout<<"0"<<endl;
}






}
