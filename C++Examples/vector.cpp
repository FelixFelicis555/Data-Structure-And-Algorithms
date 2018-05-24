#include <iostream>
#include<vector>
using namespace std;

int main()
{
    cout << "Vector Examples" << endl;
    vector<int>v1;
    vector<string>v2{"C++","Java","Python","C"};
    cout<< v2.capacity()<<endl;


    cout<<"Printing by index"<<endl;
    for(int i=0;i<v2.size();i++)
    cout<<"Element : "<<v2[i]<<endl;
    cout<<"Size of V2 vector : "<<v2.size()<<endl;

    cout<<"printing by iterator"<<endl;
    vector<int>::iterator it;
    for(auto it = v2.begin();it!=v2.end();it++)
    {
        cout<<"Elements : "<<*it<<endl;
    }
    cout<<v2.capacity()<<endl;
    v2.push_back("Javascript");
    v2.push_back("Shell-script");
     v2.push_back("C#");
    cout<<v2.capacity()<<endl;
    cout<<v2[3]<<endl;//random access
    v1.push_back(10);
    cout<<v1.capacity()<<endl;
    v1.push_back(20);
    cout<<v1.capacity()<<endl;
    v1.push_back(30);
    cout<<v1.capacity()<<endl;
    v1.push_back(40);
    cout<<v1.capacity()<<endl;
    v1.push_back(50);
    cout<<v1.capacity()<<endl;
    cout<<v2.front()<<endl;
    cout<<v2.back()<<endl;
    v2.pop_back();
    cout<<v2.back()<<endl;
    v1.clear();
    cout<<v1.size()<<endl;
    return 0;
}
