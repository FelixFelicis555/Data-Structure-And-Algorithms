#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
ll n,a,b,t,g,sum;
float avg;
cin>>t;
while(t--){
    cin>>n>>b>>a;
    vector<ll>vec;
    for(ll i=0;i<n;i++){
        cin>>g;
        vec.push_back(g);
    }
    sort(vec.begin(),vec.end());
    for(ll i=n-1;i>=(a-1);i--){
        sum=0;
        ll flag=0;
        for(ll j=i;j>(i-a);j--){
            //cout<<vec[j]<<endl;
            sum+=vec[j];

        }


            avg=sum/b;
            cout<<avg<<endl;
            break;




    }



}






}
