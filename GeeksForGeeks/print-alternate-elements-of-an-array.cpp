#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,input;
    cin>>t;
    while(t--){
        cin>>n;
        int a=0;
        vector<int>ar;
        //vector<int>ans;
        while(n--)
            {
            cin>>input;
            ar.push_back(input);
            }
        for(int i=0;i<ar.size();i++){
            if(i%2==0){
            cout<<ar[i]<<" ";}
        }
        cout<<endl;


    }






    return 0;
}
