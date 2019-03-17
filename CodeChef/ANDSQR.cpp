#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
  long double sr = sqrt(x);
  return ((sr - floor(sr)) == 0);
}
int main(){
    long long int t,n,a,b1,b2,q;
    cin>>t;
    while(t--){
        cin>>n>>q;
        vector<int>v;
        for(int i=0;i<n;i++){
                cin>>a;
                v.push_back(a);
        }
        for(int i=0;i<q;i++){
            cin>>b1>>b2;
            b1=b1-1;
            b2=b2-1;
            long long int ss;
            vector<int>ad;
            for(int j=b1;j<=b2;j++){
                    ss=v[j];
                    ad.push_back(v[j]);
                    for(int l=j+1;l<=b2;l++){
                        ss=ss&v[l];
                        ad.push_back(ss);
                    }
            }
            int cou=0;
            for(int nn=0;nn<ad.size();nn++){
                //cout<<ad[nn]<<endl;
                long double sr=sqrt(ad[nn]);
                if((sr - floor(sr)) == 0){
                    cou++;
                }
            }
            cout<<cou<<endl;
        }


    }




}

