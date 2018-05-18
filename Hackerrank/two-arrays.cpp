#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n,j,l,k,v,check=0;
        vector<int>a;
        vector<int>b;
        cin>>n>>k;
        for(j=0;j<n;j++){
            cin>>v;
            a.push_back(v);
        }
        for(j=0;j<n;j++){
            cin>>v;
            b.push_back(v);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        j=0;
        while(j!=n){
            if(a[j]+b[j]>=k){
                j++;
            }
            else{
                cout<<"NO"<<endl;
                break;
            }

        }
        if(j==n)
        {
            cout<<"YES"<<endl;
        }
    }


    return 0;
}
