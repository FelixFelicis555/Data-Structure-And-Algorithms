#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,m,a;
cin>>t;
while(t--){
    cin>>n>>m;
    vector<int>v;
    vector<int>u;
    for(int i=0;i<n;i++){
        cin>>a;
        u.push_back(a);
        if(a%m==0){
            v.push_back(a);        }
    }
    //cout<<"l"<<endl;
    n=v.size();
    //cout<<"v :"<<n<<endl;
    /*int ans;
    if(n==0)
        ans=0;
    else{
    int ncount[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ncount[i][j]=0;
        }
    }
    ncount[0][0]++;
    ncount[0][v[0]%m]++;
    //cout<<"k"<<endl;
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            ncount[i][j]=ncount[i-1][j];
        }
        //cout<<"k"<<endl;
        for(int k=0;k<m;k++){
            ncount[i][(k+v[i])%m]=ncount[i][(k+v[i])%m]+ncount[i-1][k];
        }

    }

    /*cout<<"table:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ncount[i][j]<<" ";
        }
        cout<<endl;
    }*/
    //ans=ncount[n-1][0]-1;
    //}
    int ans;
    if(n==0){
        ans=0;
    }
    else{
    ans=pow(2,n)-1;}
    cout<<ans<<endl;






}
}
