#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int>v;
        for(int i=1;i<=k;i++){
                v.push_back(n%i);
        }
        cout<<*max_element(v.begin(),v.end())<<endl;
    }}
