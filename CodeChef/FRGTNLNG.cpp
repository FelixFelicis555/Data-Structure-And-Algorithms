#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll t,n,k,l;
string a,s;
cin>>t;
while(t--){
    cin>>n>>k;
    vector<string>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    map<string,int>m;
    for(int i=0;i<k;i++){
        cin>>l;
        for(int j=0;j<l;j++){
          cin>>a;
          m[a]++;
        }
        }
    for(int j=0;j<v.size();j++){
            if(m[v[j]]!=0){
                cout<<"YES"<<" ";

            }
            else{
                cout<<"NO"<<" ";
            }
        }
        cout<<endl;


}




}
