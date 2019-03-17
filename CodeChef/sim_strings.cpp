#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    string a,b;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        int i=0,j=0;
        int d=0;
        int n=a.size();

        int m=b.size()-1;
        //cout<<n<<endl;
        //cout<<m<<endl;
        vector<int>del;
        while(i<n){
            if(a[i]==b[j]){
                    //cout<<j<<endl;
                    if(j==m){
                        i++;
                        j=0;
                        del.push_back(d);
                        d=0;
                    }
                    else{
                        i++;
                        j++;
                    }

            }
            else if(a[i]!=b[j]){
                i++;
                d++;
            }
        }
        if((i==n)&&(j!=m)&&(del.size()==0)){
            cout<<"No"<<endl;
        }
        else{
            if(del.size()==0&&i==n&&j==m){
                cout<<"Yes"<<endl;
                cout<<"0"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
                cout<<*min_element(del.begin(),del.end())<<endl;
            }
        }
        //for(int i=0;i<del.size();i++){
            //cout<<del[i]<<endl;
       // }
    }}
