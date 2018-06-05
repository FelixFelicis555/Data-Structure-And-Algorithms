#include<bits/stdc++.h>
using namespace std;
int chars[256]={0};
bool canRearrange(string s){
    for(int i=0;i<s.length();i++){
        chars[s[i]]++;
    }
    int odd=0;
    for(int i=0;i<256;i++){
        if (chars[i]%2!=0)
            odd++;
        if(chars[i]%2!=0&&odd>1){
            return false;
        }
    }
    return true;
}
int main(){
string s;
cin>>s;
if(canRearrange(s)){
    cout<<"It can"<<endl;
}
else{
    cout<<"It can't"<<endl;
}




}
