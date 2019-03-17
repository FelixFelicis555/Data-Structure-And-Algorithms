#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll n,q,k,a;
cin>>n>>q>>k;
vector<ll>v;
vector<ll>v1;
for(ll i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
    //v1.push_back(a);
}

reverse(v.begin(),v.end());


for(ll i=0;i<n;i++){
    v.push_back(v[i]);
}


vector<ll>v2;
ll p=0;
for(ll i=0;i<(2*n);i++){
        if(v[i]==1){
            if(p==0){
                p++;
                v1.push_back(1);

            }
            else{
                p++;
                v1.push_back(p);

            }
        }
        if(v[i]==0){
            p=0;
            v1.push_back(p);

        }
    }


p=0;
for(ll i=(2*n)-1;i>=0;i--){
        if(v[i]==1){
            if(p==0){
                p++;
                v2.push_back(1);
            }
            else{
                p++;
                v2.push_back(p);
            }
        }
        if(v[i]==0){
            p=0;
            v2.push_back(p);
        }
    }



for(ll i=0;i<(2*n);i++){
    cout<<v1[i]<<" ";}
    cout<<endl;
for(ll i=0;i<(2*n);i++){
    cout<<v2[i]<<" ";}

map<ll,ll>m;
ll ans[n+1];
for(ll i=0;i<n;i++){
    m[v1[i]]++;
}
ans[0]=(m.rbegin())->first;
for(ll i=n;i<(2*n);i++){
    m[v2[i-n]]--;
    if(m[v2[i-n]]==0){
        m.erase(v2[i-n]);
    }
    m[v1[i]]++;
    ans[i-n+1]=(m.rbegin())->first;
}
for(ll i=0;i<(n);i++){
    cout<<ans[i]<<" ";}
    cout<<endl;



string s;
cin>>s;
ll j=0;
for(ll i=0;i<q;i++){
    if(s[i]=='?'){
        cout<<min(ans[j%n],k)<<endl;
    }
    else if(s[i]=='!'){
        j++;
    }
}
}
