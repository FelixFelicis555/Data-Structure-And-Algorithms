#include<bits/stdc++.h>
using namespace std;
string rev(string str)
{
    string s="";
   for (int i=str.length()-1; i>=0; i--)
      {s+=str[i];}
return s;
}
string flip(string str){
string s="";
for(int i=0;i<str.length();i++){
    if(str[i]=='0'){
        s+='1';
    }
    else if(str[i]=='1'){
        s+='0';
    }
}
return s;
}

int main(){
    cout<<"C"<<endl;
string s,s2,s1,ss;
ss="0";
for(int i=2;i<10;i++){
    s=ss;
    //cout<<s<<endl;
    s1=rev(s);
    //cout<<s1<<endl;
    string a=rev(s);
    //cout<<a<<endl;
    s2=s+"0"+flip(a);
    cout<<s2<<endl;
    ss=s2;
}
cout<<"l"<<endl;
/*string sin=v[1049];
int t,k;
cin>>t;
while(t--){
    cin>>k;
    cout<<sin[k-1]<<endl;
}
*/


}
