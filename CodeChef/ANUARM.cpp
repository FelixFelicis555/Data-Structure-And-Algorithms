#include<bits/stdc++.h>
using namespace std;
int main(){
 int t,n,m,pos;
 cin>>t;
 while(t--){
    cin>>n>>m;
    vector<int>v1;
    vector<int>m1;
    for(int i=0;i<n;i++){
        v1.push_back(i);
    }
    for(int i=0;i<m;i++){
        cin>>pos;
        m1.push_back(pos);
    }

    int k1=*min_element(m1.begin(),m1.end());//smaller
    int k2=*max_element(m1.begin(),m1.end());;//larger
    for(int i=0;i<n;i++){
        v1[i]=max(abs(k2-i),abs(i-k1));
    }

    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
 }}
