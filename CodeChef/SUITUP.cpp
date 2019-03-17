#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    map<int,int>m;
    for(int i=0;i<s.size();i++){
        m[s[i]]=i-m[s[i]];
    }
int     maxm=0;
    for(int i=0;i<s.size();i++){
        if(m[s[i]]>maxm){
            maxm=m[s[i]];
        }
    }
    cout<<maxm<<endl;
}



}
