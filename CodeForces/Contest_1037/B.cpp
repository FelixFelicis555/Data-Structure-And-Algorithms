#include<bits/stdc++.h>
using namespace std;
int main(){
int n,s,a;
cin>>n>>s;
vector<int>v1;
for(int i=0;i<n;i++){
    cin>>a;
    v1.push_back(a);
}
sort(v1.begin(),v1.end());
int k=abs(v1[n/2]-s);
for(int i=n/2+1;i<n;i++){
    if(v1[i]<s){
        k+=abs(v1[i]-s);
    }
}
cout<<k<<endl;




}
