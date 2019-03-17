#include<bits/stdc++.h>
#include<typeinfo>
#define FORI(x,y) for(int i=x; i<y;i++)
#define FORJ(x,y) for(int j=x; j<y;j++)
#define PB push_back
#define F first
#define S second
#define VI vector<int>
#define VVI vector<VI >
#define VS vector<string>
#define VVS vector<VS >
#define ll long long int
using namespace std;
ll cal(string a){
int n = a.length();
int dp[26];
memset(dp,0,sizeof(dp));
ll c = 0;
for(int i=n-1; i>=0;i--){
FORJ(a[i]-'a' +1,26){
c += dp[j];
}
dp[a[i]-'a']++;

}
return c;


FORI(0,n-1)
{
FORJ(i+1,n){
// cout<<a[i]<<" "<<a[j]<<endl;
if(a[i]<a[j])
c++;



}
}
return c;
}


void printdata(vector<char> a){
FORI(0,a.size())
cout<<a[i]<<" ";
cout<<endl;
}
int main(){

ll t;
cin>>t;

while(t-->0){
string s;
cin>>s;
int n = s.length();

int a[26];
int b[26];
memset(a,0,sizeof(a));
memset(b,0,sizeof(b));
ll tcost = cal(s);

ll tprofit = 0;
cout<<"XCSCC : "<<tcost<<endl;
FORI(0,n){
a[s[i]-'a']++;
}
FORI(0,n){
int x = s[i]-'a';
if(a[x] > 0)
a[x]--;
ll ipairs = 0;
for(int k=x+1; k<26;k++)
ipairs += a[k];
for(int k= x-1; k>=0;k--)
ipairs += b[k];

FORJ(0,26){

ll nopairs = abs(j-x);
for(int k=j+1; k<26;k++)
nopairs += a[k];
for(int k= j-1; k>=0;k--)
nopairs += b[k];
ll profit = ipairs - nopairs;
tprofit = max(profit,tprofit);

}
b[x]++;

}

// cout<<" PLease be this : ";
cout<<tcost-tprofit<<endl;


}//end of while


return 0;
}
