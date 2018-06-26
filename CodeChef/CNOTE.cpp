#include<bits/stdc++.h>
using namespace std;
int main(){
int t,x,y,k,n,c,p;
cin>>t;
while(t--){
    cin>>x>>y>>k>>n;
    int pr=x-y;
    //int flag=0;
    vector<int>pages;
    vector<int>prices;
    for(int i=0;i<n;i++){
        cin>>p>>c;
        pages.push_back(p);
        prices.push_back(c);
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(pr<=pages[i]&&k>=prices[i]){
          flag=1;
          break;
        }
    }
    if(flag==0){
        cout<<"UnluckyChef"<<endl;
    }
    else{
        cout<<"LuckyChef"<<endl;
    }
    }
return 0;
}
