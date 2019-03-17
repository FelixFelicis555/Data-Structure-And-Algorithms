#include<bits/stdc++.h>
using namespace std;
int checkValidity(int a, int b, int c)
{
    int tot=0,l;
    if(a + b <= c ){
        l=a+b;
        tot=c-l+1;
    }
    else if(a + c <= b){
        l=a+c;
        tot=b-l+1;
    }
    else if(b + c <= a){
        l=b+c;
        tot=a-l+1;
        //cout<<a<<" "<<b<<" "<<c<<endl;
        //cout<<l<<endl;

    }
    return tot;

}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int k=checkValidity(a, b, c);
    cout <<k<<endl;

}
