#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string s;
cin>>n;
cin>>s;
string aa;
map<int,int>m;
//max_v=0;
char d;
for(int i=0;i<s.size();i++){
   m[s[i]]++;}
int maxx=0;

for(int i=0;i<s.size();i++){
   if(m[s[i]]>maxx){
    maxx=m[s[i]];
    d=s[i];}
   }

string s1="";
for(int i=0;i<s.size();i++){
    if(s[i]!=d){
        s1=s1+s[i];
    }
}
cout<<s1.size()<<endl;




}
