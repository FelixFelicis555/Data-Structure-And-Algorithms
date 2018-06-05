//Access object using pointer.
#include<bits/stdc++.h>
using namespace std;
class box{
int x,y,z,vol;
public:
    void setDimension(int a , int b, int c){
    x=a;
    y=b;
    z=c;
    }
    void calVolume(){
    vol=x*y*z;
    }
    void showVolume(){
        cout<<"Volume :"<<vol<<endl;
    }
};
int main(){
    box *b,b1;
    b=&b1;
    b1.setDimension(2,3,7);
    b1.calVolume();
    b1.showVolume();
    cout<<endl;
    b->setDimension(8,6,7);
    b->calVolume();
    b->showVolume();
return 0;
}
