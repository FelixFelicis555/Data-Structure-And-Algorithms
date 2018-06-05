#include<bits/stdc++.h>
using namespace std;
void bin_search(vector<int>ar,int l,int h,int x){
    int mid=(l+h)/2;
    //cout<<mid<<endl;
    if(l<=h){
    if(ar[mid]==x){
        cout<<mid<<endl;
        return;
    }
    else if(ar[mid]>x){
        return bin_search(ar,l,mid-1,x);
    }
    else{
        return bin_search(ar,mid+1,h,x);
    }}

    return -1;
}
int main(){
    int t,n,a,x;
    cin>>t;
    while(t--){
        vector<int>ar;
        cin>>n;
        while(n--){
            cin>>a;
            ar.push_back(a);
        }
        cin>>x;
        bin_search(ar,0,ar.size()-1,x);

    }





return 0;
}
