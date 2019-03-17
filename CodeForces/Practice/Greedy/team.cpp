#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,n,p=0;
cin>>n;
while(n--){
    cin>>a>>b>>c;
    if((a==1&&b==1&&c==1)||(a==0&&b==1&&c==1)||(a==1&&b==1&&c==0)||(a==1&&b==0&&c==1)){
        p++;
    }
}
cout<<p<<endl;






}
