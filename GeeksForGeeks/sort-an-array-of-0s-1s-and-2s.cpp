#include<bits/stdc++.h>
using namespace std;
int main(){
int n,in,t;
cin>>t;
while(t--){
cin>>n;
vector<int>a;
while(n--){
    cin>>in;
    a.push_back(in);
}
sort(a.begin(),a.end());
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}


return 0;
}
