#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n>=2&&n<=7){
            cout<<"1"<<endl;
        }
        else if(n==11){
            cout<<"2"<<endl;
        }
        else{
            int r=n;
            int c=0;
            while(r%5!=0){
                r=r-4;
                c++;
            }
            c=c+r/5;
            cout<<c<<endl;


        }
    }



}



