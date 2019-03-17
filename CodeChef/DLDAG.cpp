#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m,a,b;
 cin>>n>>m;
 vector<bool>nn(n);
 int adj[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        adj[i][j]=0;
    }
 }

 for(int i=1;i<=m;i++){
    cin>>a>>b;
    adj[a-1][b-1]=1;
    nn[a-1]=true;
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
 }





}
