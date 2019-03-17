#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t--){
    string s1="",s;
string s2="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s1=s1+s[i];
        }
        if(s[i]>='a'&&s[i]<='z'){
            s2=s2+s[i];
        }


    }
    cout<<s1+s2<<endl;
}
}

int a(){
    cout << "kamal" << endl ;
}

void b(){
    a() ;
}
