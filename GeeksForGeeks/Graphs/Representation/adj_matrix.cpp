#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,e;
    cout<<"Enter the number of vertices : "<<" ";
    cin>>n;
    cout<<"Enter number of edges : "<<" ";
    cin>>e;
    int adj_mat[n][n]={{0}};
    while(e--){
        cin>>a>>b;
        adj_mat[a-1][b-1]=1;
        adj_mat[b-1][a-1]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<adj_mat[0][3]<<endl;



}
