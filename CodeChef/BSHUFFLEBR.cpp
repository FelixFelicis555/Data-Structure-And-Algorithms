#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,t;
    cin>>n;
    vector<string>v[n+1];
    string s1="",s2,s3;
    for(long long int i=1;i<=n;i++){
        s1+=to_string(i);
    }
    if(n!=2){
    v[0].push_back(s1);
    //cout<<s1<<endl;
    for(long long int i=0;i<n;i++){
        for(long long int k=0;k<v[i].size();k++){
        s2=v[i][k];
        for(long long int j=0;j<n;j++){
            s3=s2;
            swap(s3[i],s3[j]);
            //cout<<"Swap: "<<s3<<i+1<<" "<<j+1<<endl;
            v[i+1].push_back(s3);
        }
    }}
    map<string,int>m;
    for(long long int i=0;i<v[n].size();i++){
    //cout<<v[n][i]<<" ";
     m[v[n][i]]++;
    }
    //cout<<endl;
    int maxm=m.begin()->second;
    string maxv=m.begin()->first;
    int minm=m.begin()->second;
    string minv=m.begin()->first;
    for (auto it=m.begin(); it!=m.end(); ++it)
    {
    if(it->second>maxm){
        maxm=it->second;
        maxv=it->first;
    }
    if(it->second<minm){
        minm=it->second;
        minv=it->first;
    }
    }
    cout<<maxv<<endl;
    //cout<<maxm<<endl;
    cout<<minv<<endl;}
    //cout<<minm<<endl;}
    else{
        cout<<"1 2"<<endl;
        cout<<"2 1"<<endl;
    }


}







































