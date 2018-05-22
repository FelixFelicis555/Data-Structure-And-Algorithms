#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<int>s;
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        s.push_back(k);
    }
    sort(s.begin(),s.end());
    int i=n-3;
    while(i>=0 && (s[i]+s[i+1]<=s[i+2])){
        i--;
       // cout<<i<<endl;
    }
    
    if(i>=0){
        cout<<s[i]<<" "<<s[i+1]<<" "<<s[i+2]<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}
