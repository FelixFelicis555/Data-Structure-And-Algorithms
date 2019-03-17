#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,p,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        vector<int>v1;
        vector<int>v2;
        sort(v.begin(),v.end());
        v2=v;
        reverse(v.begin(),v.end());
        v1=v;
        vector<int>ans;
        int sum_all=accumulate(v.begin(),v.end(),0);
        int k=p,c;
        for(int i=0;i<n;i++){
            c=0;
            if(i<n/2){
                for(int j=0;j<n;j++){
                    if(i>=j){
                    int sum=accumulate(v1.begin()+j,v1.begin()+i+1,0);
                    //cout<<sum<<" ";
                    int s=p-sum;
                    if(s<=0)
                        c++;
                    }
                    //cout<<c<<endl;
                    if(j>i){
                    int sum=accumulate(v1.begin()+i,v1.begin()+j+1,0);
                    int s=p-sum;
                    if(s<=0)
                        c++;
                    }
                }
                //cout<<c<<endl;
                //cout<<c<<endl;
                ans.push_back(c);
            }
            else{
                for(int j=0;j<n;j++){
                    if(i>j){
                    int sum=accumulate(v2.begin()+j,v2.begin()+i+1,0);
                    int s=p-sum;
                    if(s<=0)
                        c++;
                    }
                    if(j>i){
                    int sum=accumulate(v2.begin()+i,v2.begin()+j+1,0);
                    int s=p-sum;
                    if(s<=0)
                        c++;
                    }
                }
                ans.push_back(c);
            }
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
       cout<<endl;
    }

}
