#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a1,b1,a2,a3,b2,b3,k;
    float ans1,ans2,ans3;
    cin>>t;
    while(t--){
        cin>>k;
        cin>>a1>>b1;
        cin>>a2>>b2;
        cin>>a3>>b3;
        int f1=a1-a2;
        int f2=b1-b2;
        ans1=pow(f1,2)+pow(f2,2);
        //cout<<ans1<<endl;
        ans1=pow(ans1,0.5);
        //cout<<ans1<<endl;
        ans2=pow((a2-a3),2)+pow((b2-b3),2);
        ans2=pow(ans2,0.5);
        ans3=pow((a1-a3),2)+pow((b1-b3),2);
        ans3=pow(ans3,0.5);
        int l=0;
        if(ans1>k){
            l++;
        }
        if(ans2>k){
            l++;
        }
        if(ans3>k){
            l++;
        }
        if(l>1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;

    }}
