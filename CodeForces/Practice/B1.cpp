#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
    cin>>s;
    if (s == string(s.rbegin(), s.rend())) {
        if(s.size()==1 || s.size()==2)
        {

            cout<<"-1"<<endl;
        }
        else{
            char a=s[(s.size()-1)/2];
            s.erase((s.size()-1)/2,1);
            s=s+a;
            cout<<s<<endl;
        }
}
else{
    cout<<s<<endl;
}








    }
}
