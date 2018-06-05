#include <bits/stdc++.h>

using namespace std;
int main(){
float T,x1,x2,x3,t1,t2,v1,v2;
cin>>T;
for(int i=0;i<T;i++){
    cin>>x1>>x2>>x3>>v1>>v2;
    t1=(x3-x1)/v1;
    t2=(x2-x3)/v2;
    if(t1==t2){
        cout<<"Draw"<<endl;
    }
    if(t1<t2){
        cout<<"Chef"<<endl;
    }
    if(t1>t2)
    {
        cout<<"Kefa"<<endl;
    }







}











return 0;}
