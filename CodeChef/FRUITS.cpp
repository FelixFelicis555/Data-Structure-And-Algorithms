#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n,m,k;
            cin>>n>>m>>k;
            if(n<m){
                if(k+n>=m){
                    cout<<"0"<<endl;
                }
                else if(k+n<m){
                    cout<<m-(n+k)<<endl;
                }
            }
            else if(n>m){
                if(k+m>=n){
                    cout<<"0"<<endl;
                }
                else if(k+m<n){
                    cout<<n-(m+k)<<endl;
                }
            }
            else{
                cout<<"0"<<endl;
            }

    }}
