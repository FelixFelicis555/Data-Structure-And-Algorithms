#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll n,d,a;
vector<int>v;
cin>>n>>d;
for(ll i=0;i<n;i++){
 cin>>a;
 v.push_back(a);
}
sort(v.begin(),v.end());
ll i=0,c=0;
while((i+1)<n){
    if(v[i+1]-v[i]<=d){
        //cout<<i<<endl;
        i=i+2;
        c++;
    }
    else{
        //cout<<i<<endl;
        i=i+1;

    }


}
cout<<c<<endl;
return 0;
}
