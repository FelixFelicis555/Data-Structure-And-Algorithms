#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,v;
cin>>t;
while(t--){
    cin>>n;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++){
        cin>>v;
        a.push_back(v);
    }
    for(int i=0;i<n;i++){
        cin>>v;
        b.push_back(v);
    }
    vector<int>c;
    for(int i=0;i<n;i++){
        c.push_back(b[i]-a[i]);
    }
    set<int> s(c.begin(), c.end());




}



}
