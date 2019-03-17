#include<bits/stdc++.h>
using namespace std;

int main(){

int t,n,a;
cin>>t;
while(t--){
    cin>>n;
    vector<int>v;
    map<int,int>m;
    for(int i=0;i<n;i++){
       cin>>a;
       m[a]++;
       v.push_back(a);
       }
    long long int g=0;
    for (auto it=m.begin(); it!=m.end(); ++it)
    {
    int l=it->second;
    g+=l*(l-1)/2;
    }

    int o=0,e=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    long long int ct=0;
    for(int i=0;i<n;i++){
        int k2=2^v[i];
        if(m[k2]!=0){
            ct=ct+m[k2];
            m[v[i]]--;

        }
    }

    long long int a=(o*(o-1))/2+(e*(e-1))/2;
    cout<<a-(ct+g)<<endl;


}


}
