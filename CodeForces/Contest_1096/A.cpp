
#include <bits/stdc++.h>
using namespace std;

int main() {
 int t,a,b,c;
 cin>>t;
 while(t--){
    cin>>a>>b;
    int flag=0;
    for(int i=a;i<=b;i++){
        int k=2*i;
        if(k>=a&&k<=b){
                cout<<i<<" "<<k<<endl;
                flag=1;
                break;
            }
        }

    }

 }




