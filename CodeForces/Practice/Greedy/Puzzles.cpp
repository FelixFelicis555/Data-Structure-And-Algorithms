#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m,a;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<m;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++){

    }
    sort(v.begin(),v.end());
    int k=0;
    int mi=INT_MAX;
    while((k+n-1)<v.size()){
        if(v[k+n-1]-v[k]<mi){
            mi=v[k+n-1]-v[k];
        }
        k++;
    }
    cout<<mi<<endl;


}
