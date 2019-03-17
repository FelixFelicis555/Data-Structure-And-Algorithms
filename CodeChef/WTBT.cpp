#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int t;
cin>>t;
while(t--){
    cin>>s;
    for(int i=0;i<s.size();i++){
        int a=s[i]-'0';
        int b=9-a;
        int v;
        if(a>=b){
            v=a;
        }
        else{
                v=b;
        }
        s[i]=v+'0';
    }
    cout<<s<<endl;

}





}
