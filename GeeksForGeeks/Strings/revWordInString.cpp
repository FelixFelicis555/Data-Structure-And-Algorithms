#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    string str;
    cin>>str;
    string c="";
    //cout<<str.length();
    for(int i=0;i<str.length();i++){
        if(str[i]!='.')
        {
            c=c+str[i];
        }
        //if(str[i]==" "){
            //c=c+str[i];
            //s.push(c);
        //}

        else{
            s.push(c);
            c="";
            s.push(".");
        }
    }
    s.push(c);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}
