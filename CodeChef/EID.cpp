#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int n,r;
cin>>t;
while(t--){
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>r;
        a.push_back(r);
    }
    sort(a.begin(),a.end());
    int min_v=1000000,fn=a[0],sn=a[0];
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]<min_v){
            min_v=a[i]-a[i-1];
            fn=a[i-1];
            sn=a[i];
        }
    }
    cout<<min_v<<endl;



}




}
