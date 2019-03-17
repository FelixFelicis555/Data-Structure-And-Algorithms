#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int>ans;

    int n,q,a,b,c,i;
    cin>>n>>q;
    vector<vector<int>>seqlist(n);
    int la=0;
    while(q--){
        cin>>a>>b>>c;
        if(a==1){
           i=(b^la)%n;
           //cout<<i<<endl;
           //cout<<"hi"<<endl;
           /*for(int j=0;j<seqlist[i].size();j++){
                cout<<seqlist[i][j]<<endl;
            }*/
            seqlist[i].push_back(c);
            /*for(int j=0;j<seqlist[i].size();j++){
                cout<<seqlist[i][j]<<endl;
            }*/
        }
        else if(a==2){
            i=(b^la)%n;
            int s=seqlist[i].size();
            int val=c%s;
            la=seqlist[i][val];
            cout<<la<<endl;
        }
    }





}
