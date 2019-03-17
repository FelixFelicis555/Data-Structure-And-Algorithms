#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int swap_no=0;
    vector<int>check;
    check=v;
    sort(check.begin(),check.end());
    for(int i=0;i<n;i++){
        if(v[i]!=check[i])
            swap_no++;
    }
    swap_no=swap_no/2;

    if(swap_no>1){
        cout<<"-1"<<endl;
    }
    else if(swap_no==1){
        cout<<"1"<<endl;
    }
    else if(swap_no==0){
        cout<<"0"<<endl;
    }
    }
