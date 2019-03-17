#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,a;
vector<int>v;
cin>>n>>k;
for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
}
int l=5-k;
int c=0;
for(int i=0;i<v.size();i++){
    if(v[i]<=l){
        c++;
    }
}
cout<<c/3<<endl;}
