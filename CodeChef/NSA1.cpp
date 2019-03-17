#include<bits/stdc++.h>
using namespace std;
int findpairs(string s){
int p=0;
int ch[26]={0};
for(int i=s.size()-1; i>=0;i--){
int ij=s[i]-'a';
ch[ij]++;
for(int j=ij+1;j<26;j++){
    p=p+ch[j];
}
}
return p;
}

int findmin(int i,string s,set<int>&dchar){
vector<int>as;
string s1=s;

//for(int j=0;j<26;j++){
for(auto it=dchar.begin();it!=dchar.end();it++){

        s1[i]=*it+'a';
        int a=abs(s1[i]-s[i]);
        int p=findpairs(s1);
        int k=a+p;
        //cout<<"new string : "<<s1<<" "<<"old one : "<<s<<"ascii change: "<<a<<"pairs: "<<p<<endl;
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
    int ss=findpairs(s);
    int k;
    check.push_back(ss);
    for(int i=0;i<s.size();i++){
        k=findmin(i,s,dchar);
        check.push_back(k);

    }
    //cout<<"kl"<<endl;
    //int mink=*min_element(check.begin(),check.end());
    //cout<<mink<<endl;
    cout<<k<<endl;
    }
    //cout<<c<<endl;
}
