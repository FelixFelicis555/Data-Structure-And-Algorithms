#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,l,t;

    cin>>n;
    string s1="",s2,s3,m1="",m2="";
    for(long long int i=1;i<=n;i++){
        s1+=to_string(i);
    }
    if(n!=1){
    l=n/2;
    m1=m1+s1.substr(1,n/2-1);
    m1=m1+s1[0];
    m2=s1.substr(n/2+1,n/2);
    m2=m2+s1[n/2];
    m1=m1+m2;
    cout<<m1<<endl;
    cout<<m1.size()<<endl;
    m1="";
    m2="";
    m1=m1+s1[n-1];
    cout<<s1[n-1]<<endl;
    m1=m1+s1.substr(0,n-1);

    cout<<m1<<endl;
    cout<<m1.size()<<endl;}
    else{
        cout<<"1"<<endl;
        cout<<"1"<<endl;
    }}

