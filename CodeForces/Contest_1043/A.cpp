#include<bits/stdc++.h>
using namespace std;
int main(){
 int k,n;
 cin>>n;
 int arr[n];
 int sum=0;
 for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
 }
 int m=*max_element(arr,arr+n);
 int r=0;
 for(int i=0;i<n;i++){
    r+=(m-arr[i]);
 }
 if(r>sum){
    cout<<m<<endl;
 }
 else{
    while(r<sum){
        r=r+n;
        m++;
    }
    cout<<m<<endl;
 }
}
