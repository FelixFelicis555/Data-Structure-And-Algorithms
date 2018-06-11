#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>ar,int d){
    while(d--){
        ar.push_back(ar[0]);
        ar.erase(ar.begin());
    }
for(int i=0;i<ar.size();i++){
    cout<<ar[i]<<" ";
}
cout<<endl;

}
int main(){
int t,n,d,a;
cin>>t;
while(t--){
    cin>>n>>d;
    vector<int>ar;
    while(n--){
        cin>>a;
        ar.push_back(a);
    }
    rotate(ar,d);

}








return 0;
}
