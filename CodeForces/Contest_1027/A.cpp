#include<bits/stdc++.h>
using namespace std;
int check(string s){
    int n=s.size();
for(int i=0;i<n/2;i++){
        int a=s[i]-'a'+1;
        int b=s[n-i-1]-'a'+1;
        if(a!=b){
            int d=abs(b-a);
            if(d!=2){
                return 0;
            }
        }
    }
    return 1;

}

int main(){
int t,n;
string s;
cin>>t;
while(t--){
    cin>>n;
    cin>>s;
    int k=check(s);
    if(k==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}}
