#include<bits/stdc++.h>
using namespace std;
struct val{
int first;
int sec;
int third;
};
bool compareByLength(const val &a, const val &b)
{
    return a.first < b.first;
}
int main(){
    int n,m,a;
    vector<int>nn;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        nn.push_back(a);
    }
    vector<int>cc;
    for(int i=0;i<n;i++){
        cin>>a;
        cc.push_back(a);
    }
    vector<val>v;
    for(int i=0;i<n;i++){
        v.push_back({nn[i]*cc[i],nn[i],cc[i]});
    }
    //cout<<"ki"<<endl;

    //for(int i=0;i<n;i++){
    //    cout<<v[i].first<<" "<<v[i].sec<<" "<<v[i].third;
    //}
    sort(v.begin(),v.end(),compareByLength);
//for(int i=0;i<n;i++){
  //     cout<<v[i].first<<" "<<v[i].sec<<" "<<v[i].third<<" ";
    //}
    int i=n-1;
    vector<int>ans;
    int ab;
    //cout<<"lt"<<endl;
    while(m>0){
        a=v[i-1].first/v[i].third;
        //cout<<"l1"<<endl;
        ab=m-(v[i].sec-a);
        //cout<<"l2"<<endl;
        if(ab<0){
            ans.push_back((v[i].sec-m)*v[i].third);
            m=0;
            //cout<<"l3"<<endl;
        }
        else{
            m=ab;
            ans.push_back(v[i].third*(a));
            //cout<<"l4"<<endl;
        }
    i--;
    //cout<<m<<endl;
    }
    cout<<*max_element(ans.begin(),ans.end())<<endl;
    //for(int i=0;i<ans.size();i++){
      //  cout<<ans[i]<<endl;
    //}



}
