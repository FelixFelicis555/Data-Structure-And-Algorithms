#include<bits/stdc++.h>
using namespace std;
int main(){
int p,s,a,n;
cin>>p>>s;
vector<pair<int,int>>pp;

for(int i=0;i<p;i++){
        vector<int>ss;
        vector<int>k;

        n=0;
    for(int j=0;j<s;j++){
        cin>>a;
        k.push_back(a);
    }
    for(int j=0;j<s;j++){
        cin>>a;
        ss.push_back(a);
    }
    vector<pair<int,int>>v;
    for(int j=0;j<s;j++){
        v.push_back(make_pair(k[j],ss[j]));
    }
    sort(v.begin(),v.end());
    /*for(int j=0;j<p;j++){
    cout<<v[j].first<<" "<<v[j].second<<endl;
}*/
    for(int j=0;j<s-1;j++){
        if(v[j].second>v[j+1].second){
            n++;
        }
    }
    pp.push_back(make_pair(n,i+1));
}
sort(pp.begin(),pp.end());
for(int i=0;i<p;i++){
    cout<<pp[i].second<<endl;
}





}
