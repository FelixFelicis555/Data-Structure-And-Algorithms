#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
map<int,int>sp;
for(int i=0;i<v.size();i++){
    for(int j=0;j<v.size();j++){
        if(i!=j){
            int h=v[i]*v[j];
            //cout<<h<<endl;
            sp[h]++;
        }
    }
}
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int flag=0;
    for(auto i=sp.begin();i!=sp.end();i++){
            //cout<<"i"<<" "<<i->first<<endl;
    int val=n-(i->first);
    if((sp[val])&&(sp[i->first])){
        cout<<"YES"<<endl;
        //cout<<val<<" "<<i->first<<endl;
        flag=1;
        break;
    }
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }
}


}
