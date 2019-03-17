#include<bits/stdc++.h>
using namespace std;
int check(string s){
    if(s.size()<1){
            //cout<<"l"<<endl;
        return 0;
    }
    else if(s[0]!='*'){
        //cout<<"l1"<<endl;
        return 0;
    }
    else if(s[0]=='*'&&s[1]=='*'){
        //cout<<"2"<<endl;
         return 0;
    }
    else{
    int val1=0,ch=0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='-'){
                if(ch==0){
                    if(val1!=0){
                        return 0;
                    }
                }
                ch=1;
                val1++;
            }
            if(s[i]=='*'){
                ch=0;
                val1--;
            }
        }
        if(val1!=0){
            return 0;
        }
        return 1;


    }

}
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
       int k=check(s);
       if(k==0){
           cout<<"Not Strong"<<endl;
       }
       else{
           cout<<"Strong"<<endl;
       }
    }

}
