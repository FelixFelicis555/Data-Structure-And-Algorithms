#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,a,b,a1,a2;
    string s,s1,s2;
    cin>>t;
    while(t--){
       cin>>n>>m;
       vector<pair<string,int>>v;
       for(int i=0;i<n;i++){
        cin>>s>>a;
        v.push_back(make_pair(s,a));
       }
       b=0;
       int j=0;
       vector<pair<int,string>>ans;
       int k=n-1;
       while(b<m){
        s1=v[j].first;
        s2=v[k].first;
        a1=v[j].second;
        a2=v[k].second;
        if(a1>a2){
            ans.push_back(make_pair(a2,s2));
            k--;
        }
        else if(a1<a2){
           ans.push_back(make_pair(a1,s1));
           j++;
        }
        else if(a1==a2){
            if(lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end())){
                ans.push_back(make_pair(a1,s1));
                j++;
            }
            else{
                ans.push_back(make_pair(a2,s2));
                k--;
            }

        }


       }
       vector<int>an;
       sort(ans.begin(),ans.end());
       for(int i=0;i<(ans.size()-1);i++)
            cout<<i<<" ";
    }
    cout<<endl;






}
