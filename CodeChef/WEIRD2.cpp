#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,c,k;
    cin>>t;
    while(t--){
        c=0;
        cin>>n;
        int arr[n];
        vector<int>l;
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;
            if(m[arr[i]]==1){
                l.push_back(arr[i]);
            }

        }
        for(int i=0;i<l.size();i++){
            for(int j=0;j<l.size();j++){
                if((m[l[i]]>=l[j])&&(m[l[j]]>=l[i])){
                    c++;
                }
            }

        }


      cout<<c<<endl;
    }


}
