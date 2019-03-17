#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
 int t,n,k,v,m;
 cin>>t;
 while(t--){
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    m=0^k;
    for(int i=0;i<n;i++){
        v=k;
        for(int j=0;j<n;j++){
            v^=a[j];
            if(v>m){
                m=v;
            }
        }
    }
    cout<<m<<endl;


 }


}
