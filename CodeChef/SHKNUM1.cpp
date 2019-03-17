#include<bits/stdc++.h>
using namespace std;
long long int find_ans(long long int n){
long long int a,b,b2,b3,a1,ans,p1,p2,k,p3,bb;
    if(n==1||n==0){
        return 3;
    }
    a=(long long int)log2(n);
    b=(long long int)pow(2,a);
    bb=(long long int)pow(2,a+1);
    if(b==n){
        return 1;
    }
    b=n-b;
    a1=(long long int)log2(b);
    b2=(long long int)pow(2,a1);
    b3=(long long int)pow(2,a1+1);
    if((a1+1)!=a){
        p1=abs(b-b3);
    }

    if(b2==b){
        return 0;
    }
    b=b-b2;
    p3=abs(n-(bb+1));

    long long int as=min(b,p3);
    return min(as,p1);
}


int main(){
int t;
long long int n;
cin>>t;
while(t--){
    cin>>n;
    long long int k=find_ans(n);
    cout<<k<<endl;
}

}
