#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t,n,k,a;
    cin>>t;
    while(t--){
     vector<int>v;
     cin>>n>>k;
     for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
     }
     sort(v.begin(),v.end());
     int a=0,b=0,c=0,d=0;
     for(int i=0;i<v.size();i++){
        if(i<k){
            a+=v[i];
        }
        else{
            b+=v[i];
        }
        if(i<(n-k)){
            c+=v[i];
        }
        else{
            d+=v[i];
        }
     }
     cout<<max(abs(b-a),abs(d-c))<<endl;




    }

}
