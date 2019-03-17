#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
 ll n,m,x,y,v,a,b,u;
 cin>>n>>m;
 int arr[n][n]={0};
 ll weight[n][n];
 /*for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }*/
 for(int i=0;i<(2*m);i++){
 cin>>a>>b;
 arr[a-1][b-1]=1;
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>weight[i][j];
    }
 }

/*for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }*/
 //Answer for different m values;
 vector< vector<int> > ans(m);
 int f=0;
 m=0;
 for(ll j=0;j<n;j++){
    if(j%2!=0){
        //cout<<"f"<<endl;
        //cout<<
        for(ll i=(n-1);i>=0;i--){
                            //cout<<i<<" "<<j<<" ";

            if(arr[i][j]==1&&f==0){
                f=1;
                ans[m].push_back(i+1);
                ans[m].push_back(j+1);
            }
            else if(arr[i][j]!=1 && f==1){
                ans[m].push_back(i+1);
                ans[m].push_back(j+1);
            }
            else if(arr[i][j]==1 && f==1){
                ans[m].push_back(i+1);
                ans[m].push_back(j+1);
                f=0;
                m++;
            }
        }
        //cout<<endl;


    }
    else{
            //cout<<"f1"<<endl;


        for(ll i=0;i<n;i++){
                //cout<<i<<" "<<j<<" ";
                if(arr[i][j]==1&&f==0){
                f=1;
                ans[m].push_back(i+1);
                ans[m].push_back(j+1);
            }
            else if(arr[i][j]!=1 && f==1){
                ans[m].push_back(i+1);
                ans[m].push_back(j+1);
            }
            else if(arr[i][j]==1 && f==1){
                ans[m].push_back(i+1);
                ans[m].push_back(j+1);
                f=0;
                m++;
            }


        }
        //cout<<endl;

    }






 }
 //cout<<"hi"<<endl;
for(ll i=0;i<m;i++){

    //cout<<"Values in ans "<<i+1<<" ";
    cout<<ans[i].size()/2<<" ";
    for(ll j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}










}
