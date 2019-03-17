#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c,y,v,p,i,val,l1,h1,l2,h2,flag=0;
    cin>>n>>c;
    cout<<"1"<<" "<<"1"<<endl;
    cin>>val;
    if(val==1){
        cout<<"2"<<endl;
        cout<<"3"<<" "<<"1"<<endl;
        flag=1;
    }
    if(flag==0){
    if(n>800){
        for(int i=801;i<(n+800);i+=800){
            if(i>n){
                i=n;
            }
            cout<<"1"<<" "<<i<<endl;
            cin>>val;
            if(val==1){
                cout<<"2"<<endl;
                h1=i;
                l1=i-800;
                break;

            }
        }
    }
    else{
        l1=1;
        h1=n;
    }
    if(n>100){
        for(int i=l1;i<(h1+100);i+=100){
            if(i>h1){
                i=h1;
            }
            cout<<"1"<<" "<<i<<endl;
            cin>>val;
            if(val==1)
            {
                cout<<"2"<<endl;

                h2=i;
                l2=i-100;
                break;
            }

        }
    }
    else{
        h2=n;
        l2=1;
    }

    for(int i=l2;i<=h2;i++){
        cout<<"1"<<" "<<i<<endl;
        cin>>val;
        if(val==1){
            cout<<"2"<<endl;
            cout<<"3"<<" "<<i<<endl;
            break;

        }
    }}}


