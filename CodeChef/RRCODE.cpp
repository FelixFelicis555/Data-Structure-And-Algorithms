#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
 ll t,n,k,ans;
 cin>>t;
 while(t--){
 cin>>n>>k>>ans;
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 string s;
 cin>>s;
 //cout<<ans<<endl;

    for(ll j=0;j<n;j++){
        if(s=="XOR")
        {
            if(k%2!=0)
            ans=ans^a[j];
        //cout<<ans<<endl;
        }
        else if(s=="OR")
        {   if(k!=0)
            ans=ans|a[j];}
        else if(s=="AND")

        {   if(k!=0)
            ans=ans&a[j];}
    }
    /*if((k%2==0)&&(s=="XOR")){
        ans=0;
    }
if(k==0){
    cout<<"0"<<endl;
}
else{
 cout<<ans<<endl;}*/
cout<<ans<<endl;
}}
