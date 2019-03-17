#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s1,s2,s11="",s22="";
    cin>>s1>>s2;

    for(int i=0;i<s1.size();i++){
        if(s1[i]!='0'){
            s11=s11+s1[i];
        }
    for(int i=0;i<s2.size();i++){
        if(s2[i]!='0'){
            s22=s22+s2[i];
        }
    }
    int a=std::stoi(s11);
    int b=std::stoi(s22);
    cout<<a*b<<endl;
    }}
return 0;
}
