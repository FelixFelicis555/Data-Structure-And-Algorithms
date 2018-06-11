#include<bits/stdc++.h>

using namespace std;
int main(){

int t,n,a;
cin>>t;
while(t--){
    cin>>n;
    vector<int>ar;
    while(n--){
        cin>>a;
        ar.push_back(a);
    }
    n=ar.size();
    while(n--){
        cout<<ar.back()<<" ";
        ar.pop_back();
    }
    cout<<endl;
}














return 0;
}
