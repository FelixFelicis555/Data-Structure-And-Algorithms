#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int q;
    cin>>q;
    for(int j=0;j<q;j++){

    cin>>s;
    string s1=s.substr(0,s.length()/2);
    string s2=s.substr(s.length()/2,s.length());
    //cout<<s1<<" "<<s2;
    int freq[26]={0};
    if(s1.length()==s2.length()){
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
    }
    int c=0;
    for(int i=0;i<s2.length();i++){
        freq[s2[i]-'a']--;
        if (freq[s2[i]-'a']<0){
           c=c+1;
        }
    }
    cout<<c<<endl;}
    else{
        cout<<"-1"<<endl;
    }





    }
return 0;
}
