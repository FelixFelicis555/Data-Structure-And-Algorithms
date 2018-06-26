#include<bits/stdc++.h>
using namespace std;
int main(){
long long t,n;
string v;
cin>>t;
while(t--)
{
    cin>>n;
    vector<int>a;

        cin>>v;

    long long c=0;
    for(int i=0;i<v.size();i++){
        if(v[i]=='1')
            c++;

    }
    cout<<c*(c+1)/2<<endl;
}
}
