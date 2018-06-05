#include<bits/stdc++.h>
using namespace std;
class box{
int a,b,c;
public:
void set(int a,int b,int c)
{
this->a=a;
this->b=b;
this->c=c;
}
void vol()
{
cout<<a*b*c<<endl;
}
};
int main(){
box b;
b.set(1,2,3);
b.vol();






return 0;}
