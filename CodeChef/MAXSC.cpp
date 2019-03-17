#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t,n;
cin>>t;
while(t--){
    cin>>n;
    long long int arr[n][n];
    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(long long int i=0;i<n;i++){
        sort(arr[i],arr[i]+n);
    }

    long long int l=(n-1);
    long long int sum=0;
    long long int p=0;
    long long int pre=0;
    for(long long int i=0;i<(n-1);i++){
        if(arr[i+1][l]>arr[i][l]){
            sum+=arr[i][l];
            pre=arr[i][l];
            //cout<<arr[i][l]<<endl;
        }
        else if(arr[i+1][l]<=arr[i][l]){
            int f=0;
            for(long long int j=(l-1);j>=0;j--){
                if(arr[i][j]<arr[i+1][l]){
                    if(arr[i][j]>pre){
                    sum+=arr[i][j];
                    pre=arr[i][j];
                   // cout<<arr[i][j]<<endl;
                    f=1;
                    break;}
                }
            }
            if(f==0){
                p=1;
                cout<<"-1"<<endl;
                break;
            }
        }
    }
    sum+=arr[n-1][l];
    if(p==0){
       cout<<sum<<endl;
    }

}




}
