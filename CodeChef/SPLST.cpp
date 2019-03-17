#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int check(ll a,ll b,ll c,ll x, ll y ){
    vector<ll>v{a,b,c};
    for(int i=0;i<v.size();i++){
        ll s=v[i];
        ll o,a1,a2;
        if(i==0){
            o=b+c;
            a1=b;
            a2=c;

        }
        else if(i==1){
          o=a+c;
          a1=a;
          a2=c;
        }
        else if(i==2){
            o=a+b;
            a1=a;
            a2=b;
        }

        ll j=(x+y)-o;
        //cout<<o<<" "<<j<<" "<<s<<endl;
        if(s==j)
        {
            if(s+a1<x||s+a1<y||s+a2<x||s+a2<y){

            }
            else{
            return 1;
            }


        }
    }
    return 0;

}
int main(){
int t;
ll a,b,c,x,y;
cin>>t;
while(t--){
    cin>>a>>b>>c>>x>>y;
    int l=check(a,b,c,x,y);
    if(l==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}



}
