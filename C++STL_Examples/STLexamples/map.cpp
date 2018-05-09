//Storing customer name and their value
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int,string> customer;
    customer[100]="Abhishek";
    customer[200]="Nilay";
    customer[123]="Kumar";
    customer[166]="Kamal";

    cout<<customer[100];
    customer.insert(pair<int,string>(205,"Rahul"));
    map<int,string>::iterator p=customer.begin();
    while(p!=customer.end())
    {
        cout<<p->first<<"-->"<<p->second<<endl;
        p++;
    }
    cout<<customer.at(123)<<endl;
    cout<<customer.size()<<endl;
    cout<<customer.empty();

return 0;

}
