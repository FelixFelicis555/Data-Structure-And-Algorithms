#include<bits/stdc++.h>
using namespace std;
int main(){
 int t,n,m,pos;
 cin>>t;
 while(t--){
    cin>>n>>m;
    vector<int>v1;
    vector<int>m1(n);
    for(int i=0;i<n;i++){
        v1.push_back(i);
    }
    //m1=v1;
    if(m!=0){
    cin>>pos;
    v1[pos]=0;
    m1[pos]=0;
    for(int j=pos;j>0;j--){
    v1[j-1]=v1[j]+1;
    m1[j-1]=v1[j-1];
        }
        for(int j=pos;j<(n-1);j++){
            v1[j+1]=v1[j]+1;
            m1[j+1]=v1[j+1];
        }
    }
    for(int i=1;i<=m-1;i++){
        cin>>pos;
        v1[pos]=0;
        if(m1[pos]<v1[pos]){
            m1[pos]=v1[pos];
        }
        for(int j=pos;j>=0;j--){
            v1[j-1]=v1[j]+1;
            if(m1[j-1]<v1[j-1]){
                m1[j-1]=v1[j-1];
            }
        }
        for(int j=pos;j<n;j++){
            v1[j+1]=v1[j]+1;
            if(m1[j+1]<v1[j+1]){
                m1[j+1]=v1[j+1];
            }
        }


    }
    for(int k=0;k<n;k++){
        cout<<m1[k]<<" ";
    }

cout<<endl;

 }

















}
