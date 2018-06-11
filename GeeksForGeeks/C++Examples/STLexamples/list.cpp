#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1{12,13,14};
    list<string>l2{"India","Aus","Dhaka"};

    list<int>::iterator p = l1.begin();
    for(;p!=l1.end();p++)
    {
        cout<<*p<<endl;
    }
    cout<<l1.size()<<endl;
    list<string>::iterator p1 = l2.begin();
    for(;p1!=l2.end();p1++)
    {
        cout<<*p1<<endl;
    }
    cout<<l2.size()<<endl;

    l1.push_back(10);
    l1.push_front(19);
    cout<<"List 1 after addition"<<endl;
    for(p=l1.begin();p!=l1.end();p++)
    {
        cout<<*p<<endl;
    }
    l1.sort();
    cout<<endl;
    for(p=l1.begin();p!=l1.end();p++)
    {
        cout<<*p<<endl;
    }

    l2.sort();

    for(p1=l2.begin();p1!=l2.end();p1++)
    {
        cout<<*p1<<endl;
    }
    l1.pop_back();
    l1.pop_front();

    for(p=l1.begin();p!=l1.end();p++)
    {
        cout<<*p<<endl;
    }

    l1.reverse();
    for(p=l1.begin();p!=l1.end();p++)
    {
        cout<<*p<<endl;
    }

    l1.remove(13);
    cout<<endl;
    for(p=l1.begin();p!=l1.end();p++)
    {
        cout<<*p<<endl;
    }

    l1.clear();
    cout<<"Size of l1 : "<<l1.size()<<endl;









return 0;

}
