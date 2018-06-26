#include<bits/stdc++.h>
using namespace std;
int main(){
int t,c,n,v;
cin>>t;
while(t--){
 cin>>n>>c;
 vector<int>a;
 int num=n;
 while(n--){
    cin>>v;
    a.push_back(v);
    }
int flag=0;
 for(int i=0;i<a.size();i++){
    c=c-a[i];

 }
 if(c>=0){
    cout<<"Yes"<<endl;
 }
 else{
    cout<<"No"<<endl;
 }





}
return 0;
}
