#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,i,j;
cin>>t;
while(t--){
  cin>>n;
  int arr[n][n];
  int c=1;
  i=0;
  for(j=0;j<n;j++){
    for(int k=j;k>=0;k--){
        arr[i][k]=c;
        i++;
        c++;
    }
    i=0;
}
i=(n-1);
for(j=1;j<n;j++){
    for(int k=j;k<n;k++){
        arr[k][i]=c;
        i--;
        c++;
    }
    i=(n-1);
}


  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;






}
}
