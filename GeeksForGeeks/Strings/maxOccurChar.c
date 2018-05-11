#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
string str;
map<char,int>word;
cin>>str;
for (int i=0;i<str.length();i++)
{
    c=word.find(str[i]);
    if(itr!=m.end())
    {
        m[str[i]]++;
    }
    else
    {
        m.insert(make_pair(str[i],1));
    }

}

map<char,int>iterator p=m.begin();
for(;p!=m.end();p++){
    cout<<*p.first<<endl;
}




return 0;
}
