#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,in;
cin>>t;
while(t--){
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>in;
        a.push_back(in);
    }
    stack<int>s;
    s.push(a[0]);
    for(int i=1;i<n;i++){
        int next=a[i];
        if(s.empty()){
            s.push(next);
        }
        else{
            int element=s.top();
            s.pop();
            while(element>next){
                cout<<next<<" ";
                if(s.empty()==true)
                    break;
                element=s.top();
                s.pop();

            }
            if(element<next){
                s.push(next);
            }
        }
    }
    while (s.empty() == false)
    {
        cout << "-1" << endl;
        s.pop();
    }
}
return 0;
}







