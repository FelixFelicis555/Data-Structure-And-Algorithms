
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
 ll t;
 string s;
 cin>>t;
 while(t--){
    cin>>s;
    if(s.size()>2){
    int f=0;
    for(int i=2;i<s.size();){
        if((s[i]!=s[i-1])&&(s[i]==s[i-2])){
            i++;
        }
        else{
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }}
    else{
        if(s[0]==s[1]){
          cout<<"NO"<<endl;
        }
        else{
           cout<<"YES"<<endl;
        }
    }
 }}
