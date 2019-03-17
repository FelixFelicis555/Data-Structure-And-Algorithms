#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long int arr[5000+1][5000+1];
void com_table(){
int n=5000;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        if(i==j||j==0){
            arr[i][j]=1;
        }
        else{
            arr[i][j]=((arr[i-1][j-1]%(MOD-1))+(arr[i-1][j]%(MOD-1)))%(MOD-1);
        }
    }
}


}
long long int calpow( long long int a,long long  int b)
{
    a=a%MOD;
	long long int p = 1;
	while(b>0)
	{
        if(b&1)
		{p = (p*a)%MOD;}
		a = (a*a)%MOD;
        b >>= 1;
	}
	return(p%MOD);
}
int main(){
com_table();
int t;
int n,k,a;
cin>>t;
while(t--){
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        vector<int>u;
        u=v;
        sort(u.begin(),u.end());
        long long int t=arr[n-1][k-1];
        //cout<<t<<endl;
        long long int pro=1,p,q,r,x;
        for(int i=1;i<n-1;i++){
            p=arr[u.size()-i-1][k-1];
            q=arr[i][k-1];
            x=(t-(p+q)%(MOD-1));
            //s1=u[i] s2=x
            //long long int s=u[i];
            string s1=to_string(u[i]);
            string s2=to_string(x);
            long long int a1=0,a2=0;

            for(int i=0; i < s1.length(); i++) {
            a1=(a1*10 + s1[i]-'0')%MOD;}
            for(int i=0; i < s2.length(); i++) {
            a2= (a2*10 + s2[i]-'0')%(MOD-1);
        }
        long long int f=pow(a1,a2);
            f=f%MOD;
            pro=pro%MOD;
            pro=(pro*f)%MOD;

        }
        cout<<pro<<endl;



}}
