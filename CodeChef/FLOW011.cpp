#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s;
    cin>>t;
    while(t--){
        cin>>s;
        double gs;
        if(s<1500){
            gs=s+(0.1*s)+(0.9*s);
        }
        else{
            gs=s+500+(0.98*s);
        }
        cout<<fixed<<setprecision(2)<<gs<<endl;
    }

}
