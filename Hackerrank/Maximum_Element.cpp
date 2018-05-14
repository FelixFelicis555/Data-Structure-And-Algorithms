#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    stack<int>s;
    stack<int>m;
    int Q,x,type,max;
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        cin>>type;
        if (type==1)
        {
            cin>>x;
            if(s.empty()==true)
            {s.push(x);
             m.push(x);}
            else
            {
                s.push(x);
                if (m.top()<x)
                    m.push(x);
                else
                    m.push(m.top());
            }
            
        }
        if (type==2)
        {
            s.pop();
            m.pop();
        }
        if (type==3)
        {
            cout<<m.top()<<endl;
        }
    }
    return 0;
}
