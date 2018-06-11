//Program to print details of 3 books using functions.
#include <bits/stdc++.h>
using namespace std;
struct book{
    int book_id;
    string book_name;
    float book_price;
}b1,b2,b3;
book getDetail(){
    book b;
    cout<<"Enter the Book id : "<<endl;
    cin>>b.book_id;
    cout<<"Enter the Book name : "<<endl;
    cin>>b.book_name;
    cout<<"Enter the Book price : "<<endl;
    cin>>b.book_price;
    return b;
}
void showDetail(book b){
cout<<b.book_id<<"\t"<<b.book_name<<"\t"<<b.book_price<<endl;
}
int main(){
 b1=getDetail();
 b2=getDetail();
 b3=getDetail();
 cout<<"Book which are present are : "<<endl;
 showDetail(b1);
 showDetail(b2);
 showDetail(b3);
 return 0;
}

