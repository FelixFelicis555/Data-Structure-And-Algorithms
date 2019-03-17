#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int f=0;
        for(int i=0;i<s1.size();i++){
            if((s1[i]!=s2[i])&&(s1[i]!='?')&&(s2[i]!='?'))
            {
                cout<<"No"<<endl;
                f=1;
                break;

            }

        }
        if(f==0){
            cout<<"Yes"<<endl;
        }
    }





}
