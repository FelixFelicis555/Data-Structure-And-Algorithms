#include<bits/stdc++.h>
using namespace std;

int main(){
int l,r,t,p;
cin>>t;
while(t--){
    cin>>l>>r;
    p=0;
    for(int i=l;i<=r;i++){
        int c=i%10;
        if(c==2||c==3||c==9)
            p++;

    }
    cout<<p<<endl;

}}
