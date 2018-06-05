#include<bits/stdc++.h>
using namespace std;
bool isfunny(string s,string r){
    for(int i=0;i<s.length()-1;i++){
            int a1,a2,b1,b2;
        a1=s[i]-'a';
        a2=s[i+1]-'a';
        b1=r[i]-'a';
        b2=r[i+1]-'a';
        //cout<<"a1-a2"<<a1-a2<<endl;
      //  cout<<"b1-b2"<<b1-b2<<endl;
        if(abs(a1-a2)!=abs(b1-b2)){
            return false;
        }

    }
    return true;
}
int main(){
string s,r;
cin>>r;
s=r;
reverse(r.begin(),r.end());
if(isfunny(s,r)){
    cout<<"Funny"<<endl;
}
else{
    cout<<"Not funny"<<endl;
}








return 0;}
