#include<bits/stdc++.h>
using namespace std;
int main(){
int q;
int n,a1,b1;
cin>>q;
while(q--){
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    while(n--){
    cin>>a1;
    v1.push_back(a1);
    cin>>b1;
    v2.push_back(b1);
    }
    for(int i=0;i<v1.size();i++)
    {
        int a=v1[i];
        int b=v2[i];
        if((a<b)&&(i==(v1.size()-1))){
            cout<<"1"<<endl;
            //break;
        }
        else if(a>=b&&(i==v1.size()-1)){
            cout<<"0"<<endl;
        }
        else if(a<b){
            v2[i+1]=v2[i+1]+(b-a);
            //cout<<"g"<<endl;

        }
    }
    //cout<<"jk"<<endl;
}








return 0;
}
