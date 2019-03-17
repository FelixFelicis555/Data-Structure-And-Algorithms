#include<bits/stdc++.h>
using namespace std;
int main(){
string m;
cin>>m;
vector<int>v;
for(int i=0;i<m.size();i+=2){
    if(m[i]=='1'){
            v.push_back(1);}
    else if(m[i]=='2'){
            v.push_back(2);}
    else if(m[i]=='3'){
            v.push_back(3);}
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i];
    if(i!=(v.size()-1)){
        cout<<"+";
    }
}
cout<<endl;


}

