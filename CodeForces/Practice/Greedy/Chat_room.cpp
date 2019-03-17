#include<bits/stdc++.h>
using namespace std;
int main(){
 string s1,s2;
 cin>>s1;
 s2="hello";
 int j=0;
 for(int i=0;i<s1.size();i++){
    if(s2[j]==s1[i]){
        j++;
    }
 }
 //cout<<j<<endl;
 if(j==5){
    cout<<"YES"<<endl;

 }
    else{
        cout<<"NO"<<endl;
    }

}
