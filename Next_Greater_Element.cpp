#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    int a[]={11,3,2,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    s.push(a[0]);
    for (int i=1;i<n;i++){
        if(a[i]>s.top()){
            cout<<s.top()<<"--->"<<a[i]<<endl;
            s.pop();
        }
        else
        {
            s.push(a[i]);
        }

    }








    return 0;
}
