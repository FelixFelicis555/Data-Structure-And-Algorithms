#include <bits/stdc++.h>

using namespace std;

// Complete the jimOrders function below.
int main(){
    vector<pair<int,int>> c;
    pair<int,int>a;
    int n,o,p,s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>o>>p;
        s=o+p;
        a.first=s;
        a.second=i+1;
        c.push_back(a);
    }
    sort(c.begin(),c.end());
    for(int i=0;i<c.size();i++){
        cout<<c[i].second<<" ";
    }

    return 0;
}
