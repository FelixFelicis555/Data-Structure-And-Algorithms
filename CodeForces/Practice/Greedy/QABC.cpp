#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,v;
    cin>>t;
    cin>>n;
    vector<int>A;
    vector<int>B;
    for(int i=0;i<n;i++){
        cin>>v;
        A.push_back(v);
    }
    multimap <int, int> mm;
    for(int i=0;i<n;i++){
        cin>>v;
        B.push_back(v);
        mm.insert(pair<int,int>(v,i));
    }





}
