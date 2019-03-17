#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,m;
cin>>t;
while(t--){
    cin>>n>>m;
    char arr[n][m];
    bool ch[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]=='.'){
                if(arr[i][j]=='.'&&arr[i+1][j]=='.'&&arr[i][j+1]=='.'&&arr[i+1][j+1]=='.'){
                    ch[i][j]=1;
                    ch[i+1][j]=1;
                    ch[i][j+1]=1;
                    ch[i+1][j+1]=1;
                }
            }
        }
    }
    int f=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ch[i][j]!=1&&arr[i][j]!='#'){
                cout<<"NO"<<endl;
                f=1;
                break;
            }

        }
        if(f==1){
                break;
            }
    }
    if(f==0){
        cout<<"YES"<<endl;
    }

}




}
