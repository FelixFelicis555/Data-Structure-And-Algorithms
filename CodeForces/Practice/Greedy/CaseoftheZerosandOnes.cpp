#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<(s.size()-1);i++){
        if((s[i]=='1'&&s[i+1]=='0')||(s[i]=='0'&&s[i+1]=='1')){
            s.erase(s.begin()+i);
            cout<<s<<endl;
            s.erase(s.begin()+i+1);
            cout<<s<<endl;
            i=i-2;
        }
    }
    cout<<s.size()<<endl;




}
