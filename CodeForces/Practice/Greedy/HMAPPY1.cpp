#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,q,k,a;
    string s;
    cin>>n>>q>>k;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
     cin>>s;
     for(ll i=0;i<s.size();i++){
            if(s[i]=='!')
                {
                //cout<<"!"<<endl;
                ll kk=v[n-1];
                for(ll j=n-1;j>=1;j--){
                    v[j]=v[j-1];
                }
                v[0]=kk;
                cout<<"After ! effect : ";
                for(ll j=0;j<n;j++){
                        cout<<v[j]<<" ";
                }
                cout<<endl;
            if(s[i]=='?')
            {
                //cout<<"?"<<endl;
                vector<ll>lc;
                ll a=0;

                for(ll j=0;j<v.size();j++){
                    if(v[j]==1){
                         //cout<<"1"<<endl;
                    a++;
                    }
                    if(v[j]==0){
                        //cout<<"0"<<endl;
                    lc.push_back(a);
                    a=0;
                    }
                    }
                    lc.push_back(a);

            ll m=*max_element(lc.begin(),lc.end());
            if(m>k){
                cout<<k<<endl;
            }
            else{
                cout<<m<<endl;
            }
        }
     }
     }}

3 2 2 3 3 3
6 10 3
1 0 1 1 1 0
?!!?!!?!?!
     /*for(ll i=0;i<(2*n);i++){
    cout<<v[i]<<" ";
}*/
/*vector<ll>v2;
ll p=0;
for(int i=0;i<(2*n);i++){
        if(v[i]==1){
            if(p==0){
                p++;
                v1.push_back(1);
                v2.push_back(1);
            }
            else{
                p++;
                v1.push_back(p);
                v2.push_back(p);
            }
        }
        if(v[i]==0){
            p=0;
            v1.push_back(p);
            v2.push_back(p);
        }
    }
reverse(v2.begin(),v2.end());
/*for(ll i=0;i<(2*n);i++){
    cout<<v1[i]<<" ";}
    cout<<endl;
for(ll i=0;i<(2*n);i++){
    cout<<v2[i]<<" ";}

map<ll,ll>m;
vector<ll>ans;
for(ll i=0;i<n;i++){
    m[v1[i]]++;
}
ans.push_back((m.rbegin())->first);
for(ll i=n;i<(2*n);i++){
    m[v2[i-n]]--;
    if(m[v2[i-n]]==0){
        m.erase(v2[i-n]);
    }
    m[v1[i]]++;
    ans.push_back((m.rbegin())->first);
}*/
//for(ll i=0;i<ans.size();i++){
  //  cout<<ans[i]<<endl;
//}

