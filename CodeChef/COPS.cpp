#include<bits/stdc++.h>
using namespace std;
int main(){
int t,x,y,m,a;
while(t--){
    cin>>m>>x>>y;
    vector<int>v;
    for(int i=0;i<m;i++){
        cin>>a;
        v.push_back(a);
    }
    int k=x*y,c=0;
    for(int i=1;i<=100;i++){
            int flag=0;
        for(int j=0;j<m;j++){
                cout<<v[j]<<endl;
            if((i<=(v[j]+k))&&(i>=(v[j]-k)))
                {
                    cout<<v[j]<<endl;
                      c++;
                        break;
            }
        }
    }
    cout<<c<<endl;




}







return 0;
}
