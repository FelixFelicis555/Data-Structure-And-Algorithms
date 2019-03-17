#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
string s;
cin>>t;
while(t--){
    cin>>n;
    map<string,float>m;
    float tt=0;
    float tm;
    for(int i=0;i<n;i++){
        cin>>s;
        if(m[s]!=0){
            tm=m[s]/2;
            //cout<<tm<<endl;
        }
        else{
            tm=0;
            for(int j=0;j<s.size();j++){
            if(j==0){
                tm+=0.2;
                //cout<<tm<<endl;
            }
            else if(s[j]=='f'&&s[j-1]=='d'){
               tm+=0.4;
               //cout<<tm<<endl;
            }
            else if(s[j]=='d'&&s[j-1]=='f'){
                tm+=0.4;
                //cout<<"k"<<endl;
                //cout<<tm<<endl;
            }
            else if(s[j]=='j'&&s[j-1]=='k'){
                tm+=0.4;
                //cout<<tm<<endl;

            }
            else if(s[j]=='j'&&s[j-1]=='j'){
                tm+=0.4;
                //cout<<tm<<endl;

            }
            else if(s[j]=='k'&&s[j-1]=='k'){
                tm+=0.4;
                //cout<<tm<<endl;

            }
            else if(s[j]=='f'&&s[j-1]=='f'){
                tm+=0.4;
                //cout<<tm<<endl;

            }
            else if(s[j]=='d'&&s[j-1]=='d'){
                tm+=0.4;
                //cout<<tm<<endl;

            }
            else if(s[j]=='k'&&s[j-1]=='j'){
               tm+=0.4;
               //cout<<tm<<endl;
            }
            else{
                tm+=0.2;
                //cout<<tm<<endl;
            }

            }
            //cout<<tm<<endl;
            m[s]=tm;


        }
        tt+=tm;

    }
    cout<<tt*10<<endl;






}





}
