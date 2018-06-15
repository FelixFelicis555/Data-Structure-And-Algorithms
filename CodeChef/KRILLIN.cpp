#include <bits/stdc++.h>
//#include <boost/math/common_factor.hpp>
using namespace std;
int findlcm(vector<int>v,int l,int r){
vector<int>v1(v.begin()+l,v.begin()+r+1);
/*for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<endl;
}*/
/*unordered_map<int, int> hash;

for (int i = 0; i < n; i++)
hash[v[i]]++;
int max_count = 0, res = -1;
for (auto i : hash) {
if (max_count < i.second) {
    res = i.first;
    max_count = i.second;
}
*/


int median;
int n=v1.size();
sort(v1.begin(),v1.end());
int mode=n;
if (n % 2 != 0){
    //cout<<"hi"<<endl;
       median=n/2+1;}
else{
    //cout<<"hi1"<<endl;
        median=((n-1)/2 + n/2)/2;}

//cout<<"mode"<<mode<<endl;
//cout<<"median"<<median<<endl;
return ((mode*median)/__gcd(mode, median) );

}

int main(){

int t,n,q,a,q1,q2,q3;
cin>>t;
while(t--){
    cin>>n>>q;
    vector<int>v;
    v.push_back(0);
    for(int i=1;i<=n;i++){
        cin>>a;
        v.push_back(a);
    }
    while(q--){
        cin>>q1>>q2>>q3;
        if(q1==1){
            int lcm=findlcm(v,q2,q3);
            cout<<lcm<<endl;
        }
        else if(q1==2){
            v[q2]=q3;
        }

    }





}






}
