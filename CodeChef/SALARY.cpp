#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,v;
cin>>t;
while(t--){
    cin>>n;
    vector<int>w;
    int i=0,sum=0;
    while(i<n){
        cin>>v;
        sum=sum+v;
        w.push_back(v);
        i++;
    }
    int min=*min_element(w.begin(),w.end());
    cout<<sum-n*min<<endl;

}
}
