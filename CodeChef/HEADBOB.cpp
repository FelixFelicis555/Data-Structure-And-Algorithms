#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    string s1;
    cin>>s1;
    map<char,int>m;
    for(int i=0;i<n;i++){
        m[s1[i]]++;
    }
    if(m['I']!=0){
        cout<<"INDIAN"<<endl;
    }
    else if(m['Y']!=0){
        cout<<"NOT INDIAN"<<endl;
    }
    else{
        cout<<"NOT SURE"<<endl;
    }
}


}
