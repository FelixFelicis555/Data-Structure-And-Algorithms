#include<bits/stdc++.h>
using namespace std;
int calculateones(unsigned long long n){
int count_of_ones=0;
while(n){
    count_of_ones=count_of_ones+n%2;
    n=n/2;
}
return count_of_ones;}

int noOfOperation(unsigned long long n1,unsigned long long n2){
if(n1==n2)
    return 0;
else if(n2==0)
    return -1;
else if (n2==1){
    return (n1==0 ? 1 : -1);
}
int s=n2-1;
int k=calculateones(s)-calculateones(n1)+1;
if(k>0){
    return k;
}
else{
    return 2;
}
}
int main(){
    int t;
    unsigned long long a,b,b1;
    cin>>t;
    while(t--){
    cin>>a>>b;
    int ans=noOfOperation(a,b);
    cout<<ans<<endl;
    }
return 0;
}
