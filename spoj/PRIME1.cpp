#include<bits/stdc++.h>
using namespace std;
void genPrime(int m,int n){
    for(int j=m;j<=n;j++){
            int flag=0;
        for(int l=2;l<=j/2;l++){
            if(j%l==0){
                flag=1;
                break;}
        }
    if(flag==0&&j!=1){
        cout<<j<<endl;
    }
    }
}
int main(){
int t,m,n;
cin>>t;
for(int i=0;i<t;i++){
    cin>>m>>n;
    genPrime(m,n);
}









return 0;}
