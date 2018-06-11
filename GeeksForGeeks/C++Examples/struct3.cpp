//Program to print detail of 2 student using function within structure and with access specifier.
#include<bits/stdc++.h>
using namespace std;
struct student{
    private:
    int roll_no;
    string name;
    float percentage;
    public:
    void getDetail(){
    cout<<"Enter roll no, name and percentage of a student"<<endl;
    cin>>roll_no>>name>>percentage;
    }
    void showDetail(){
    cout<<roll_no<<"\t"<<name<<"\t"<<percentage<<endl;
    }
}s[2];
int main(){
for(int i=0;i<2;i++){
 s[i].getDetail();
}
 cout<<"Student Details"<<endl;
 for(int i=0;i<2;i++){
 s[i].showDetail();
}
 //s1.roll_no=123;
 //cout<<s1.roll_no<<endl;








return 0;
}
