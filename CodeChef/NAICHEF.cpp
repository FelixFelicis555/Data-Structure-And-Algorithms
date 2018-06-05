#include<bits/stdc++.h>
using namespace std;
int main(){
int T,N,A,B,in;

cin>>T;
while(T--){
    cin>>N>>A>>B;
    int ca=0,cb=0,len=N;
    while(N--){
        cin>>in;
        if(in==A)
            ca++;
        if(in==B)
            cb++;
        }
        //cout<<ca<<endl;
        //cout<<cb<<endl;
        float result=float(ca*cb)/float(len*len);
        cout<<result<<endl;
}








return 0;
}
