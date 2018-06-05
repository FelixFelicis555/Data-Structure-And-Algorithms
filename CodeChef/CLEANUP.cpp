#include<bits/stdc++.h>
using namespace std;
int main(){
int T,n,m,a;
cin>>T;
for(int p=0;p<T;p++){
vector<int>j;
vector<int>rj;
vector<int>chef;
vector<int>ast;
cin>>n>>m;
for(int i=0;i<n;i++){
    j.push_back(i+1);
}
for(int i=0;i<m;i++){
    cin>>a;
    j[a-1]=0;
}
for(int i=0;i<n;i++){
    if(j[i]!=0)
        rj.push_back(j[i]);
}
int k=0;
for(int i=0;i<rj.size();i++){
        if(k%2==0){//even
            chef.push_back(rj[i]);
        }
        else{
            ast.push_back(rj[i]);
        }
        k++;
    }

if(chef.empty()){
    cout<<" "<<endl;
}
else{
    for(int i=0;i<chef.size();i++)
    {
        cout<<chef[i]<<" ";
    }
    cout<<endl;
}
if(ast.empty()){
    cout<<" "<<endl;
}
else{
    for(int i=0;i<ast.size();i++)
    {
        cout<<ast[i]<<" ";
    }
    cout<<endl;
}
}

return 0;
}
