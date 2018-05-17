#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,a,b;
    int ones=0,sum=0;
    vector<int>l;
    int sumOfzero=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b==1){
            l.push_back(a);
            ones=ones+1;
        }
        if(b==0){
            sumOfzero=sumOfzero+a;
        }
    }
    /*for(int i=0;i<l.size();i++)
    {
        cout<<l[i]<<endl;
    }
    cout<<sumOfzero<<endl;*/
    sort(l.begin(),l.end());
    reverse(l.begin(),l.end());
    for(int i=0;i<l.size();i++){
        sum=sum+l[i];
    }
    //cout<<sum<<endl;
    //cout<<ones<<" "<<k<<endl;
    if (k<ones){
        for(int i=k;i<l.size();i++){
            //cout<<l[i]<<endl;
            sum=sum-2*(l[i]);
        }
        //cout<<sum<<endl;
    }
    sum=sum+sumOfzero;
    cout<<sum<<endl;





    return 0;
}
