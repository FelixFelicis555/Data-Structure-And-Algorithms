#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Hello ";
    string s2,s3;
    s2.assign("Abhishek");
    cout<<s1<<"\n";
    cout<<s2<<"\n";
    s3=s1.append(s2);
    cout<<s3<<endl;

    //insert
    s3.insert(0,"Hi, ");
    cout<<s3<<endl;

    //replace
    s3.replace(4,5,"kamal");//4 is starting index and 5 is length of words to be replaced.
    cout<<s3<<endl;

    //erase
    s1.erase();
    cout<<s1;

    //find : return the index of first ocurrence of string,if not present then return -1.
   int i= s3.find("Abhishek");
   cout<<i<<endl;

   //rfind : return the index of found string but iteration will start from end.
   s3.append(" Abhishek");
   cout<<s3<<endl;
   int e=s3.rfind("Abhishek");
   cout<<e<<endl;










    return 0;
}
