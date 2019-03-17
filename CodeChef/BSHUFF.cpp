#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,l,t;
    cin>>n;
    string s1="",s2,s3,m1,m2;

    if(n!=1){
    l=(n+1)/2;
    //cout<<l<<endl;
    for(long long int i=2;i<=l;i++){
        m2=to_string(i);
        cout<<m2<<" ";
    }
    m2=to_string(1);
    cout<<m2<<" ";

    for(long long int i=l+2;i<=(n);i++){
        m2=to_string(i);
        cout<<m2<<" ";
    }
    m2=to_string(l+1);
    cout<<m2<<endl;
    //minimum
    m1=to_string(n);
    cout<<m1<<" ";
    for(long long int i=1;i<=(n-1);i++){
        m1=to_string(i);
        cout<<m1<<" ";
    }
    cout<<endl;

    //maximum

    /*for(int i=0;i<m2.size();i++){
        cout<<m2[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m1.size();i++){
        cout<<m1[i]<<" ";
    }
    cout<<endl;*/
    }
    else{
        cout<<"1"<<endl;
        cout<<"1"<<endl;
    }



    }
