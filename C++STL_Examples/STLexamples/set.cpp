#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    for (int i=0;i<10;i++)
    {
        s.insert(10-i);
    }
    set<int>::iterator t;
    t=s.find(5);
    s.erase(t);

    set<int>::iterator it=s.begin();
    while(it!=s.end())
    {
        cout<<*it<<endl;
        it++;
    }

    return 0;
}
