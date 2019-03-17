
#include<bits/stdc++.h>
using namespace std;
int main(){
 int t,d,n;
 long long int sum;
 cin>>t;
 while(t--){
    cin>>d>>n;
    for(int i=1;i<=d;i++){
        sum=(n*(n+1))/2;
        cout<<n<<" "<<sum<<endl;
        n=sum;
    }
    cout<<sum<<endl;
 }


}
