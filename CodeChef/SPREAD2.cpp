#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,k,d,a;
cin>>t;
while(t--){
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
}
k=n;
int i=0,sum=1;
d=0;
while(k>0){
    d++;
    sum+=accumulate(v.begin()+1,v.begin()+(1+sum),0);

}


}


}
