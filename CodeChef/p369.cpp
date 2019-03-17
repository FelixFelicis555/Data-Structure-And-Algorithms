#include<bits/stdc++.h>
using namespace std;
int main() {
    int l,a,t;
    cin>>l;
    vector<int>v;
    map<int,int>m;
    for(int i=0;i<l;i++){
        cin>>a;
        m[a]++;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cin>>t;
    for(int i=0;i<v.size();i++){
            m[v[i]]--;
        for(int j=i+1;j<v.size();j++){
            m[v[j]]--;
            if(m[t-(v[i]+v[j])]!=0){
                cout<<v[i]<<","<<" "<<v[j]<<" "<<"and"<<" "<<t-(v[i]+v[j])<<endl;
            }

        }

    }
}
