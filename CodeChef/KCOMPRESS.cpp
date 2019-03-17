#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,s,a;
    cin>>n>>s;
    vector<int>v;
    v.push_back(0);
    vector<pair<int,int>>v1;
    for(int i=1;i<=n;i++){
        cin>>a;
        v.push_back(a);
        v1.push_back(make_pair(a,i));
    }
    sort(v1.begin(),v1.end());
    /*for(int j=0;j<v1.size();j++){
        cout<<v1[j].first<<" "<<v1[j].second<<endl;;
    }*/

    int c=0;
    int i,m1,m2;
    vector<int>vis(n+1,0);
    for(int k=0;k<=n;k++){
            vector<int>v2(n+1,1);
            for(int l=0;l<v1.size();l++){

            i=v1[l].second;//i=index
            vis[i]=1;
            int val1=v1[l].first;//value at index i
            //int val2=v2[i];
            m1=max(1,i-k);
            m2=min(n,i+k);
            //cout<<m1<<" "<<m2<<endl;


            for(int m=m1;m<=m2;m++){

            if((m==i)&&(vis[m])){
                    //cout<<"L"<<endl;
                continue;
                }
                else if((v[m]>v[i])&&(v2[m]<v2[i]+1)){
                        v2[m]=v2[i]+1;
                        //cout<<"L"<<endl;
                    }
                    else if(v[m]==v[i]){
                        v2[m]=v2[i];
                        //cout<<"L"<<endl;

                    }

            }


        }
    int sum=accumulate(v2.begin()+1,v2.end(),0);

    /*for(int jj=1;jj<v2.size();jj++){
        cout<<v2[jj]<<" ";
    }
    cout<<endl;
    //cout<<sum<<endl;*/
    if(sum<=s){
        cout<<k<<endl;
        //cout<<"k: "<<k<<endl;
        c++;

    }
    else{
        //cout<<k<<endl;
        break;
    }}
    cout<<c<<endl;

    //cout<<endl;

    }



}
