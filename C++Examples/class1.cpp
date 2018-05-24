#include<bits/stdc++.h>
using namespace std;
class shapes{
    int a,b;
    public:
    int rec_area()
    {
        int area=a*b;
        return area;
    }
    shapes(int x,int y){
        a=x;
        b=y;
        cout<<"Constructor initialized"<<endl;
    }

    shapes(shapes &s){
    cout<<"Copy constructor"<<endl;
    a=s.a;
    b=s.b;
    }

};
int main(){
shapes s1(3,4);
int k=s1.rec_area();
cout<<k<<endl;

shapes s2(s1);
int l=s2.rec_area();
cout<<l<<endl;






return 0;
}
