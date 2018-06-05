//Remove minimum number of characters so that two strings become anagram
#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2;
cin>>s1>>s2;
int chars =26;
int freq[chars]={0};
for (int i=0;i<s1.length();i++){
    freq[s1[i]-'a']++;
}
for (int i=0;i<s2.length();i++){
    freq[s2[i]-'a']--;
}
int s=0;
for (int i=0;i<chars;i++){
    s=s+abs(freq[i]);
}
cout<<s<<endl;





return 0;}
