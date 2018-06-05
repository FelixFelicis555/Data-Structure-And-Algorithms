#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int l=0,h=s.length()-1;
    for(int i=0;i<s.length();i++){
        if(s[l]!=s[h]){
            return false;
        }
        else {
            l++,h--;
        }
    }
    return true;

}
int main(){
string s;
cin>>s;
bool k = isPalindrome(s);
if (k){
    cout<<"Palindrome"<<endl;
}
else{
    cout<<"Not Palindrome"<<endl;
}







return 0;
}
