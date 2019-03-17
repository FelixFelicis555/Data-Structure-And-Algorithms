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
    }//Correct till here*/

    int c=0;
    int i,m1,m2;

    for(int k=0;k<=n;k++){
            vector<int>v2(n+1,1);
            for(int l=0;l<v1.size();l++){
            i=v1[l].second;//i=index
            int val1=v1[l].first;//value at index i
            int val2=v2[i];
            m1=max(1,i-k);
            m2=min(n,i+k);

            //cout<<m1<<" "<<m2<<endl;
            //vector<int>v3=v[slice(m1,m2,1)];
            //vector<int>v4=v2[slice(m1,m2,1)];

            for(int m=m1;m<=m2;m++){
                //cout<<i<<" "<<v[m]<<" "<<val1<<" "<<m<<endl;
                if((v[m]>val1)&&(m!=i)){
                    //cout<<"L"<<endl;
                    if(v2[m]<=val2){
                        v2[m]++;
                    }
                }
            }


        }
    int sum=accumulate(v2.begin()+1,v2.end(),0);
    //cout<<sum<<endl;
    for(int jj=1;jj<v2.size();jj++){
        cout<<v2[jj]<<" ";
    }
    cout<<endl;
    if(sum<=s){
        //cout<<k<<endl;
        c++;

    }
    else{
        //cout<<k<<endl;
        break;
    }}
    cout<<c<<endl;


    }



}
