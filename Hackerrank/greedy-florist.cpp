#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,i;
    int a;
    int f=1,cp=1,total=0;
    cin>>n>>k;
    vector<int>c;
    for(i=0;i<n;i++){
        cin>>a;
        c.push_back(a);
    }
    sort(c.begin(),c.end());
    reverse(c.begin(),c.end());
    for(int i=0;i<c.size();i++){
        if(cp<=k){
            total=total+f*c[i];
           //cout<<total<<endl;
            cp=cp+1;
        }
        else{
            cp=cp%k;
            f=f+1;
            total=total+c[i]*f;
            //cout<<total<<endl;
            cp++;
        }
    }
    cout<<total<<endl;
}

