#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 ll t,h1,h2,w1,w2;
 string r1,r2;
 cin>>t;
 while(t--){
    cin>>h1>>w1;
    cin>>r1;
    cin>>h2>>w2;
    cin>>r2;
    ll row=(h1*h2)/__gcd(h1,h2);
    ll col=(w1*w2)/__gcd(w1,w2);
int a1=row/h1;
int a2=row/h2;
int b1=col/w1;
int b2=col/w2;

string ans1="";
string ans2="",s,val="";

//For Array1
for(int i=0;i<r1.size();i++){
    s=r1[i];
    for(int j=1;j<=b1;j++){
        val+=s;
    }
    if((i+1)%w1==0){
        for(int k=1;k<=a1;k++){
            ans1+=val;
        }
        val="";
    }
}
cout<<ans1<<endl;

//For Array2
val="";
for(int i=0;i<r2.size();i++){
    s=r2[i];
    for(int j=1;j<=b2;j++){
        val+=s;
    }
    if((i+1)%w2==0){
        for(int k=1;k<=a2;k++){
            ans2+=val;
        }
        val="";
    }
}
cout<<ans2<<endl;
int cc=b1;
if(b1>=b2){
    cc=b2;
}

int c=0;
for(int i=0;i<ans1.size();i++){
    if(ans1[i]==ans2[i]){
    }
    i=i+b1;
}
cout<<c<<endl;



 }}

