#include<iostream>
#include<string>
using namespace std;
int main(){
string s1,s2,c="";
cin>>s1;
int k=s1.length()-1;
for(int i=k;i>=0;i--)
{
    c+=s1[i];
}

cout<<"Reversed Word : "<<c<<endl;

return 0;
}
