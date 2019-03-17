
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,s,v,u;
cin>>s>>n;
vector<pair<int,int>>y;
for(int i=0;i<n;i++){
        cin>>v>>u;
        y.push_back(make_pair(v,u));
    }
sort(y.begin(),y.end());
int f=0;
for(int i=0;i<n;i++){
    int k1=y[i].first;
    int k2=y[i].second;
    if(s>k1){
        //s=s-k1;
        s=s+k2;
    }
    else{
        f=1;
    }
}
if(f==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}








