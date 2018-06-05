#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
long n,m;
for(int i=0;i<t;i++){
    cin>>n>>m;
    long k=n%m;
    if(k==0){
        cout<<"EVEN"<<endl;
    }
    else if(k%2!=0){
        cout<<"ODD"<<endl;
    }
    else if(k%2==0&&k!=0){
        cout<<"EVEN"<<endl;
    }
    else{

    }
}





return 0;
}
