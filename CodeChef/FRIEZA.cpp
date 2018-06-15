#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
string s,r,n;
n="frieza";

cin>>t;
while(t--){
    r="";
    cin>>s;
    int cg=0,cb=0;
    for(int i=0;i<s.size();i++){
        if(n.find(s[i])!=std::string::npos)
        {
            //cout<<"hi"<<endl;
            if(cb!=0){
            r+=to_string(cb);
            //cout<<r<<endl;
            cb=0;}
            cg++;

        }
        else{
            //cout<<"hi2"<<endl;
            if(cg!=0){
            r+=to_string(cg);
            cg=0;}
            cb++;
        }
    }
    if(cg!=0)
    r+=to_string(cg);
    if(cb!=0)
    r+=to_string(cb);
    cout<<r<<endl;


}






return 0;
}
