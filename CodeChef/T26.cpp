#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,q,l,r,k;
cin>>n;
cin>>m;
vector<int>v(n,0);
for(int i=0;i<m;i++){
    cin>>l>>r;
    for(int j=l;j<=r;j++){
        v[j]++;
    }
}

/*for(auto i=mp.begin();i!=mp.end();i++){
    cout<<i->first<<" "<<i->second<<endl;
}*/
sort(v.begin(),v.end());
cin>>q;
for(int i=0;i<q;i++){
    cin>>k;
    int c=0;
            //map<int,int>::iterator it;
        int j=0;
        while(v[j]<k){
            c++;
            j++;
        }
        cout<<n-c<<endl;
        }
    }











