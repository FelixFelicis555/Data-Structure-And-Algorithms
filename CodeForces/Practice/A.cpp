#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s,s1="";
    cin>>n;
    cin>>s;
    int h=1;
    for(int i=1;i<=n;){
        s1=s1+s[i-1];
        i=i+h;
        h++;
    }
    cout<<s1<<endl;




}
