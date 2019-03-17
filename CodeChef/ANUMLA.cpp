

#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,k;
cin>>t;
while(t--){
cin>>n;
vector<int>val;
for(int i=0;i<n;i++)
{
    cin>>k;
    val.push_back(k);
}
sort(val.begin(),val.end());
reverse(val.begin(),val.end());
int sum=0,count=1;
for(int i=0;i<n;i++){
    if(i%4<2){
        sum+=val[i];
    }
}
cout<<sum<<endl;

}}

