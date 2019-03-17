#include <bits/stdc++.h>
using namespace std;
int main() {
int t,n;
cin>>t;

while(t--){
cin>>n;
vector<int>v;
map<int,int>m1;
int a[n+1];
for(int i=1;i<=n;i++){
cin>>a[i];
if(m1[a[i]]==0){
    m1[a[i]]++;
    v.push_back(a[i]);
}}
map<int,int>m2;
int f=0;
for(int i=0;i<v.size();i++){
        if(m2[a[v[i]]]==0){
            m2[a[v[i]]]++;
        }
        else{
            f=1;
            //cout<<f<<endl;
            cout<<"Truly Happy"<<endl;
            break;
        }

}
//cout<<f<<endl;
if(f==0){
    cout<<"Poor Chef"<<endl;
}


}}
