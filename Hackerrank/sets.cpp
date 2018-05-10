#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q,y,x;
    set<int>s;
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>y;
        if(y==1){
            cin>>x;
            s.insert(x);
            
        }
        else if(y==2){
            cin>>x;
            s.erase(x);
            
        }
        else{
            cin>>x;
            set<int>::iterator itr=s.find(x);
            if(itr!=s.end())
            {
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
            
        }
    }
    return 0;
}
