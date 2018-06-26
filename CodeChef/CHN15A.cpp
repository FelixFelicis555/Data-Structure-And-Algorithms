#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,k,a;
cin>>t;
while(t--){
   cin>>n>>k;
   int c=0;
    while(n--){
        cin>>a;
        if((a+k)%7==0){
            c++;
        }
    }
    cout<<c<<endl;

}
return 0;
}
