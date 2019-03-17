#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,a;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int sum_rem=sum;
    int sum_st=0,i=0;

    while(sum_st<=sum_rem){
        sum_st+=v[i];
        sum_rem-=v[i];
        i++;
    }
    cout<<i<<endl;
}
