#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str;
map<char,int>word;
cin>>str;
for (int i=0;i<str.length();i++)
{
    map<char,int>::iterator itr=word.find(str[i]);
    if(itr!=word.end())
    {
        word[str[i]]++;
    }
    else
    {
        word.insert(make_pair(str[i],1));
    }

}
auto x = max_element(word.begin(),word.end(),[](const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second; });
cout<<x->first<<"\t";
cout<<x->second<<endl;
/*map<char,int>::iterator p=word.begin();
for(;p!=word.end();p++){
    cout<<p->second<<endl;
}*/




return 0;
}
