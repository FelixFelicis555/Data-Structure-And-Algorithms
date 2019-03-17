#include<bits/stdc++.h>
using namespace std;
int findpairs(string s){
int c=0;
int has[26]={0};
    /*for(int i=0;i<s.size();i++){
        has[s[i]-'a']=1;
    }*/
//cout<<s<<endl;
for(int i=0;i<s.size()-1;i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]<s[j]){
               c++;
            }
            }
        //has[s[i]-'a']=1;
        }
        return c;
}

int findmin(int i,string s,set<int>&dchar){
vector<int>as;
string s1=s;

//for(int j=0;j<26;j++){
for(auto it=dchar.begin();it!=dchar.end();it++){

        s1[i]=*it;
        int a=abs(s1[i]-s[i]);
        int p=findpairs(s1);
        int k=a+p;
        cout<<"new string : "<<s1<<" "<<"old one : "<<s<<"ascii change: "<<a<<"pairs: "<<p<<endl;
        as.push_back(k);

    }
    //cout<<endl;
    int minv=*min_element(as.begin(),as.end());
    return minv;



}
int main(){
int t;
string s;
cin>>t;
while(t--){
    cin>>s;
    set<int>dchar;
    for(int i=0;i<s.size();i++){
    dchar.insert(s[i]-'a');
}

    vector<int>check;
    check.push_back(findpairs(s));
    for(int i=0;i<s.size();i++){
        int k=findmin(i,s,dchar);
        check.push_back(k);

    }
    //cout<<"kl"<<endl;
    int mink=*min_element(check.begin(),check.end());
    cout<<mink<<endl;
    }
    //cout<<c<<endl;
}
