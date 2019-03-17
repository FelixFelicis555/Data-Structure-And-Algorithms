#include<bits/stdc++.h>
using namespace std;

int main(){
string s,s1,s2;
int t,n,k;
cin>>t;
while(t--){
    cin>>n>>k;
    cin>>s;
    s1=s.substr(0,k);
    int tp=0;
    for(int i=1;i<n-k+1;i++){
        int p=0;
        s2=s.substr(i,k-i+i);
        //cout<<s1<<" "<<s2<<endl;
        for(int j=0;j<s2.size();j++){
            if(s1[j]!=s2[j])
                p++;
        }
        tp=tp+p;
        s1=s2;

    }
    cout<<tp<<endl;







}





}
