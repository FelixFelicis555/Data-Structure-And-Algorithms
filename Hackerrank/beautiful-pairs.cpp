#include <bits/stdc++.h>

using namespace std;


// Complete the beautifulPairs function below.
int main() {
    int n,a;
    int c=0,flag;
    cin>>n;
    vector<int>A;
    vector<int>B;
    for(int i=0;i<n;i++){
        cin>>a;
        A.push_back(a);

    }
    for(int i=0;i<n;i++){
        cin>>a;
        B.push_back(a);

    }


    for(int i=0;i<A.size();i++){
        for(int j=0;j<B.size();j++){
            if(A[i]==B[j])
            {
            B.erase(B.begin() + j);
             c=c+1;
            break;}

        }

    }
    //cout<<c<<endl;
    //cout<<B.size();
    if(c<A.size())
    {c=c+1;}
    else
    {c=c-1;}
    cout<<c<<endl;
}

