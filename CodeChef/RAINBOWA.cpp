#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,v;
cin>>t;
while(t--)
{
    cin>>n;
    vector<int>a;
    int s=1;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        a.push_back(v);

    }
    int flag=0,i;
    for( i=0;i<n/2;i++)
    {
       if((a[i]!=a[n-1-i]))
       {
           flag=1;
           break;
       }


    }
    if(n%2!=0){
        if(a[i]!=7){
            flag=1;
        }
    }
    //cout<<i<<" "<<n-1-i<<endl;
    if(flag==0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}
return 0;
}
