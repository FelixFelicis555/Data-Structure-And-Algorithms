#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,i;
string s;
cin>>t;
while(t--){
    cin>>n;
    cin>>s;
    int co=0;
    int f=-1;
    for(i=0;i<s.length();i++){
        if(s[i]=='1'){
            f=1;
            break;
        }
    }
    int c=0;
    if(f==1){
        int j;
        for(int k=i-1;k>0;k--){
            if(s[k]=='0'){
               if((s[k-1]=='0')&&(s[k+1]=='0')){
                s[k]='1';
                c++;
            }
            }
        }
        if(s[0]=='0'&&s[1]=='0'){
            s[0]='1';
            c++;
        }
        for(j=i+1;j<(n-1);j++){
             if(s[j]=='0'){
            if((s[j-1]=='0')&&(s[j+1]=='0')){
                s[j]='1';
                c++;
            }}
            if((s[n-1]=='0')&&(s[n-2]=='0')){
            s[n-1]='1';
              c++;
            }
        }
        cout<<c<<endl;
    }
    else{
        if(n%2==0){
            cout<<n/2<<endl;
        }
        else{
            cout<<(n+1)/2<<endl;
        }
    }
}}
