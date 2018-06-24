#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,a;
cin>>t;
while(t--){
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
}
bool l=equal(v.begin() + 1, v.end(), v.begin());
//cout<<l<<endl;

while(l==false){
auto b=max_element(v.begin(), v.end());
//cout<<*b<<endl;
auto c=min_element(v.begin(), v.end());
//cout<<*c<<endl;
int k=(*b-*c);
//cout<<k<<endl;
replace(v.begin(),v.end(),*b,k);

l=equal(v.begin() + 1, v.end(), v.begin());
//cout<<l<<endl;
}
cout<<v[0]<<endl;

}
return 0;
}
