#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            string s1,s2;

            cin>>s1>>s2;
            int minm=0;
            for(int i=0;i<s1.size();i++){
            if((s1[i]!=s2[i])&&(s1[i]!='?')&&(s2[i]!='?'))
            {
                minm++;
            }
            }
            int ex=0;
            for(int i=0;i<s1.size();i++){
                if(s1[i]=='?'||s2[i]=='?'){
                    ex++;
                }
            }
            cout<<minm<<" "<<minm+ex<<endl;
    }}
