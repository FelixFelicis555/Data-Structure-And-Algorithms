#include <bits/stdc++.h>
//#include "boost/algorithm/string.hpp"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string str;
    cin>>str;
    string a="010";
    string b="101";
    bool k1=str.find(a)!=std::string::npos;
    bool k2=str.find(b)!=std::string::npos;
    if(k1||k2){
        cout<<"Good"<<endl;
    }
    else{
        cout<<"Bad"<<endl;
    }



}







return 0;
}
