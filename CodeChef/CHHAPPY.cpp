#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;

while(t--){
int flag=0;
int n;
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++){
cin>>a[i]; // entering the elements into the array.
}
for(int i=1;i<=n;i++){
for(int j=i+1;j<=n;j++){
if(a[i]!=a[j] && a[a[i]] == a[a[j]]){
cout<<"a[i] : "<<a[i]<<"a[j] : "<<a[j]<<"i : "<<i<<"j : "<<j<<endl;
flag=1;
break;
}
}
}
if(flag!=1){
cout<<"No "<<endl;
}
else{
cout<<"Yes "<<endl;
}
flag=0;
}
return 0;
}
