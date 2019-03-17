
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t,n,v;
    cin>>t;
    while(t--){
        cin>>n;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>v;
            s.insert(v);
        }
        /*for(auto i=s.begin();i!=s.end();i++){
            cout<<*i<<endl;
        }*/
        cout<<s.size()<<endl;
    }}
