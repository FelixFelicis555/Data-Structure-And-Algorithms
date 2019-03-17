#include <bits/stdc++.h>

using namespace std;

int main(){
 int n;
 vector<int>v;
 for(int i=1;i<1000;i++){
    v.push_back(i*i);
 }
 map<int,int>m;
 for(int i=1;i<v.size();i++){
    cout<<v[i]-v[i-1]<<endl;
 }

}
