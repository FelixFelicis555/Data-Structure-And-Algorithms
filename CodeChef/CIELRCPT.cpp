#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
vector<int>v{2048,1024,512,256,128,64,32,16,8,4,2,1};
int t,p,c,s;
cin>>t;
while(t--){
 cin>>p;
 c=0;
 s=p;
 int i=0;
 while(s>0){
    if(v[i]>s){
        i++;
    }
    else{
        s=s-v[i];
        c++;
        i=0;
    }



 }

 cout<<c<<endl;
}



}

