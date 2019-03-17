#include<bits/stdc++.h>
using namespace std;

int main(){
 int t,n,m,v,l,r,k;
 cin>>t;
 while(t--){
    cin>>n>>m;
    vector<int>a[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>v;
            a[i].push_back(v);
        }
    }
    int q;
    cin>>q;
    while(q--){
        cin>>l>>r;
        vector<int>x;
        vector<int>y;
        vector<int>z(m);
        vector<int>memo[n];

        if(l==r)
            z=a[l-1];
        else{
        x=a[l-1];
        y=a[l];
        for(int i=l;i<r;i++){
                //cout<<"gi"<<endl;
                if(memo[i-1]!=NULL){
                    z=memo[i-1];
                }
                else{
            for(int j=0;j<m;j++){
                    //cout<<"gi"<<endl;
                    k=x[j];
                    //cout<<k<<endl;
                z[j]=y[k-1];
                //cout<<"gh"<<endl;
                //cout<<"z"<<j<<" "<<z[j];
            }
            memo[i-1]=z;
            x=z;
            /*for(int k=0;k<z.size();k++){
                cout<<z[k]<<" ";
            }*/
            //cout<<endl;
            if(i+1<n)
            y=a[i+1];
        }}}
        int c=0;
        for(int i=1;i<=m;i++)
        {
            c=c+i*z[i-1];
        }
        cout<<c<<endl;
    }



 }










}
