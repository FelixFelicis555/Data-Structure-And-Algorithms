#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,a,c1=0,c2=0,c3=0,c4=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1){
            c1++;
        }
        if(a==2){
            c2++;
        }
        if(a==3){
            c3++;
        }
        if(a==4){
            c4++;
        }
        v.push_back(a);
    }
    int tt=min(c1,c3);
    c1=c1-tt;
    c3=c3-tt;
    tt=tt+c2/2;
    c2=c2-c2/2;
    tt=tt+c4;



}
