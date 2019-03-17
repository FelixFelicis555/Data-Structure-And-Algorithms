#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,m,l,high;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n][m];

        if(n>=1&&m==1){
            if(n==1){
                high=1;
                arr[0][0]=1;
            }
            else{
                if(n==2){
                    high=1;
                }
                else{
                high=2;}
                l=1;
                for(int i=0;i<n;i++){
                    if(l>2){
                    arr[i][0]=2;
                    l++;
                    if(l==5)
                    l=1;
                  }
                  else if(l<=2){
                    arr[i][0]=1;
                    l++;
                  }}
        }}
        else if(n==1&&m>=1){
            if(m==1){
                high=1;
                arr[0][0]=1;
            }
            else{
                    if(m==2){
                    high=1;
                }
                else{
                high=2;}

                l=1;
                for(int i=0;i<m;i++){
                    if(l>2){
                    arr[0][i]=2;
                    l++;
                    if(l==5)
                    l=1;
                  }
                  else if(l<=2){
                    arr[0][i]=1;
                    l++;
                  }}
        }
        }
        else if(n>=2&&m==2){
                if(n==2){
                    high=2;
                    arr[0][0]=1;
                    arr[0][1]=2;
                    arr[1][0]=1;
                    arr[1][1]=2;
                }
                else if(n>2){
                    high=3;
                    for(int i=0;i<n;i++){
                        if(i%3==0){
                            arr[i][0]=1;
                            arr[i][1]=1;
                        }
                        else if(i%3==1){
                            arr[i][0]=2;
                            arr[i][1]=2;
                        }
                        else if(i%3==2){
                            arr[i][0]=3;
                            arr[i][1]=3;
                        }
                    }

                    }

        }
        else if(n==2&&m>2){
            high=3;
            for(int i=0;i<m;i++){
                        if(i%3==0){
                            arr[0][i]=1;
                            arr[1][i]=1;
                        }
                        else if(i%3==1){
                            arr[0][i]=2;
                            arr[1][i]=2;
                        }
                        else if(i%3==2){
                            arr[0][i]=3;
                            arr[1][i]=3;
                        }
                    }

                    }


        else if(n>=3&&m>=3){
        high=4;
        for(int i=0;i<n;i++){
            l=1;
            for(int j=0;j<m;j++){
                if(i%4==0){
                  if(l>2){
                    arr[i][j]=2;
                    l++;
                    if(l==5)
                    l=1;
                  }
                  else if(l<=2){
                    arr[i][j]=1;
                    l++;
                  }


                }
                else if(i%4==1){
                        if(l>2){
                    arr[i][j]=4;
                    l++;
                    if(l==5)
                    l=1;
                  }
                  else if(l<=2){
                    arr[i][j]=3;
                    l++;
                  }


                }
                else if(i%4==2){
                    if(l>2){
                    arr[i][j]=1;
                    l++;
                    if(l==5)
                    l=1;
                  }
                  else if(l<=2){
                    arr[i][j]=2;
                    l++;
                  }


                }
                else if(i%4==3){
                    if(l>2){
                    arr[i][j]=3;
                    l++;
                    if(l==5)
                    l=1;
                  }
                  else if(l<=2){
                    arr[i][j]=4;
                    l++;
                  }


                }
            }
        }}
        cout<<high<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }




}
