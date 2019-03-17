#include<bits/stdc++.h>
using namespace std;
int check(int a, int b, int c)
{
    if (a + b <= c || a + c <= b || b + c <= a)
        return 0;
    else
        return 1;
}
int main(){
 int t,n,v;
 cin>>t;
 while(t--){
    cin>>n;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++){
       cin>>v;
        a.push_back(v);
        }
    for(int i=0;i<n;i++){
       cin>>v;
        b.push_back(v);}
    int s1=a[n-1];
    int f=0;
    if(s1!=b[0]){
        cout<<"No"<<endl;
    }
    else{
    for(int i=1;i<(n-1);i++){
        int s2=a[i];
        int s3=b[i];
        int k=check(s1,s2,s3);
        if(k!=1){
            f=1;
            cout<<"No"<<endl;
            break;
        }
        else if(k==1){
            if(s3>(s1+s2)){
            cout<<"No"<<endl;
            break;
            }
        }

    }
    if(f==0){
        cout<<"Yes"<<endl;
    }

 }   }

}
