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
        vector<int>del;
        while(i<n){
            if(a[i]==a[j]){
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
            else if(a[i]!=a[j]){
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
                cout<<*max_element(del.begin(),del.end())<<endl;
            }
        }
    }}
