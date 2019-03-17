#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,a;
    ll s;
    cin>>n>>s;
    vector<int>v;
    v.push_back(0);
    vector<pair<ll,ll>>v1;
    for(int i=1;i<=n;i++){
        cin>>a;
        v.push_back(a);
        v1.push_back(make_pair(a,i));
    }
    sort(v1.begin(),v1.end());

    /*for(int j=0;j<v1.size();j++){
        cout<<v1[j].first<<" "<<v1[j].second<<endl;;
    }*/

    ll c=0;
    int i,m1,m2;
    vector<int>vis(n+1,0);
    for(int k=0;k<=n;k++){
            vector<int>v2(n+1,1);
            for(int l=0;l<v1.size();l++){

            i=v1[l].second;//i=index
            vis[i]=1;
            int val1=v1[l].first;//value at index i

            m1=max(1,i-k);
            m2=min(n,i+k);


            for(int m=m1;m<=m2;m++){


                if((m!=i)&&(vis[m])){
                if((v[m]>v[i])&&(v2[m]<v2[i]+1)){
                        v2[m]=v2[i]+1;

                    }
                    else if(v[m]==v[i]){

                        v2[m]=max(v2[m],v2[i]);
                        //cout<<"L"<<endl;

                    }}

            }


        }
    ll sum=accumulate(v2.begin()+1,v2.end(),0);
    if(sum<=s){
    cout<<k<<" "<<sum<<endl;

        c++;

    }
    else{
        break;
    }}
    cout<<c<<endl;

    //cout<<endl;

    }



}
