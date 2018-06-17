#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    set<int>s;
    int a=n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0)
        {
            a=abs(i-n/i);
            s.insert(a);
        }
    }
    /*for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }*/
    cout<<*s.begin()<<endl;







}









return 0;
}
