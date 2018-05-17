#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int>arr;
    int n,k,a;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int value=arr[k-1]-arr[0];
    //cout<<value<<endl;
    for(int i=1;i<=arr.size()-k;i++)
    {
        int a=arr[k-1+i]-arr[i];
        //cout<<k<<endl;
        if(a<value)
        {
            value=a;
        }
    }
cout<<value<<endl;
}

