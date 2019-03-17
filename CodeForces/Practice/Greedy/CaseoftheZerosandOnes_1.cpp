#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int z=0,on=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            on++;
        }
        if(s[i]=='0'){
            z++;
        }
    }
    int t=min(on,z);
    on=on-t;
    z=z-t;
    cout<<on+z<<endl;}
