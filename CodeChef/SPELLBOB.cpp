#include<bits/stdc++.h>
using namespace std;
string first(char a1,char a2){
string st1="";
    if(a1=='b'&&a2=='b'){
        st1=st1+'b';
    }
    else if(a1=='o'&&a2=='o'){
        st1=st1+'o';
    }
    else if (a1=='o'){
        st1=st1+'o';
        if(a2=='b')
            st1=st1+'b';
    }
    else if(a1=='b'){
        st1=st1+'b';
        if(a2=='o')
            st1=st1+'o';
    }
    else if (a2=='o'){
        st1=st1+'o';
        if(a1=='b')
            st1=st1+'b';
    }
    else if(a2=='b'){
        st1=st1+'b';
        if(a1=='o')
            st1=st1+'o';
    }
    return st1;


}

int main(){
int t;
cin>>t;
string s1,s2;

while(t--){
    cin>>s1;
    cin>>s2;
    vector<string>s;
    string ss="";
    ss=ss+s1[0]+s1[1]+s1[2];
    s.push_back(ss);
    ss="";
    ss=ss+s1[0]+s2[1]+s1[2];
    s.push_back(ss);
    ss="";
    ss=ss+s1[0]+s1[1]+s2[2];
    s.push_back(ss);
    ss="";
    ss=ss+s1[0]+s2[1]+s2[2];
    s.push_back(ss);
    ss="";
    ss=ss+s2[0]+s1[1]+s1[2];
    s.push_back(ss);
    ss="";
    ss=ss+s2[0]+s1[1]+s2[2];
    s.push_back(ss);
    ss="";
    ss=ss+s2[0]+s2[1]+s1[2];
    s.push_back(ss);
    ss="";
    ss=ss+s2[0]+s2[1]+s2[2];
    s.push_back(ss);

    /*for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }*/
    auto it1=find(s.begin(),s.end(),"bob");
    auto it2=find(s.begin(),s.end(),"bbo");
    auto it3=find(s.begin(),s.end(),"obb");
    if((it1==s.end()&&it2==s.end())&&it3==s.end()){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }

}

return 0;
}
