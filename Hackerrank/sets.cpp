#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int Q,type,Y;
    char X[100];
    map<string,int>student;
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>type;
        if (type==1){
            cin>>X>>Y;
            map<string,int>::iterator itr=student.find(X);
            if(itr==student.end()){
            student.insert(make_pair(X,Y));}
            else{
                int a=student[X];
                student.insert(make_pair(X,a+Y));
            }
            
            
        }
        else if (type==2){
            student.erase(X);
            
        }
        else{
            cout<<student[X];
            
        }
        
    }
    return 0;
}
