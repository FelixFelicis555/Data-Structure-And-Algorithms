#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,sum=0;
cin>>n;
int size=n;
vector<int>c;
while(n--){
cin>>a;
sum=sum+a;
c.push_back(a);
}
int sum1=size*(size+1)/2;
if(sum==sum1)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;












return 0;
}
