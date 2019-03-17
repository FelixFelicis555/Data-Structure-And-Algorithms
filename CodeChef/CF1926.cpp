#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int p=0,f=0,a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1)
            p++;
        if(a==0)
            f++;
    }
    if(p>f){
        cout<<"PUB-G"<<endl;
    }
    else if(p<f){
        cout<<"Fortnite"<<endl;
    }
    else{
        cout<<"fifty-fifty"<<endl;
    }



}




return 0;
}
