#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,k,r,c;
cin>>t;
while(t--){
    cin>>n>>k;
    int arr[n]={0};
    map<int,int>mr;
    map<int,int>mc;
    for(int i=0;i<k;i++){
        cin>>r>>c;
        mr[r-1]++;
        mc[c-1]++;
        arr[c-1]=1;
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            v.push_back(i+1);
        }
    }
    int s=0;
    int c=0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(mr[i]==0&&mc[i]!=0){
            //cout<<i+1<<" "<<v[s]<<endl;
            ans.push_back(i+1);
            ans.push_back(v[s]);
            s++;
            c++;
        }
        else if(mr[i]==0&&mc[i]==0){
           // cout<<i+1<<" "<<v[s]<<endl;
            ans.push_back(i+1);
            ans.push_back(v[s]);
            s++;
            c++;
        }
    }
    cout<<c<<" ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;




}


}
