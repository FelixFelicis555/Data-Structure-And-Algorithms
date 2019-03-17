#include<bits/stdc++.h>
using namespace std;
int main(){
 long long int t,n,k;
 cin>>t;
 while(t--){
    cin>>n>>k;
    long long int a[n];
    long long int b[n*k];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    vector<long long int>sum;
    long long int s=0;
    long long int p=-1;
    for(long long int i=0;i<n;i++){
        if(a[i]>=0){
            s+=a[i];
        }
        else if(a[i]<0){
            sum.push_back(s);
            s=0;
            p=i;
        }
    }
    if(s!=0){
        sum.push_back(s);
    }
    s=0;
    if(p!=-1){
    for(long long int j=p+1;;j++){
        if(a[j%n]>0){
        s+=a[j%n];
        }
        else if(a[j%n]<0){
            sum.push_back(s);
            break;
        }
    }
    cout<<*max_element(sum.begin(),sum.end())<<endl;}
    else{
    cout<<k*(*max_element(sum.begin(),sum.end()))<<endl;
    }

 }




}
