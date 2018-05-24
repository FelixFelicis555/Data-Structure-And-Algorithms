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
    int add(int a, int b){
    return a+b;}
}s1,s2;
int main(){
 s1.getDetail();
 s2.getDetail();
 cout<<"Student Details"<<endl;
 s1.showDetail();
 s2.showDetail();
 int k=s1.add(5,6);
 cout<<k<<endl;
 //s1.roll_no=123;
 //cout<<s1.roll_no<<endl;








return 0;
}
