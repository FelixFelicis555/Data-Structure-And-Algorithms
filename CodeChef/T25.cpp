#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,k;
cin>>t;
while(t--){
    cin>>n>>k;
    int a;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int c=k;
    int p=0;
    while((c-v[p])>0){
        c=c-v[p];
        p++;
    }
    cout<<p++<<" "<<c<<endl;
}


}
