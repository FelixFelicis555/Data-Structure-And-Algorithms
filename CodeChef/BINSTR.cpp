#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp/10;

        dec_value += last_digit*base;

        base = base*2;
    }
    return dec_value;
}
int main(){
int n,q,a,l,r,x;
cin>>n>>q;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(binaryToDecimal(a));
}
for(int i=1;i<=q;i++){
    cin>>l>>r>>x;
    x=binaryToDecimal(x);
    vector<int>v1;
    int m=INT_MIN,kk;
    for(int i=(l-1);i<=(r-1);i++){
            int val=(v[i]);
            int d=x;
            int c=(val^d);
            //cout<<c<<endl;
            if(c>m){
                m=c;
                kk=i;
            }
    }
    //int m=distance(v1.begin(),max_element(v1.begin(),v1.end()));
    cout<<kk+1<<endl;
}



}
vector<ll>lc;
vector<ll>ans;
a=0;
for(ll j=0;j<v1.size();j++){
                    if(v1[j]==1){
                         //cout<<"1"<<endl;
                    a++;
                    }
                    if(v1[j]==0){
                        //cout<<"0"<<endl;
                    lc.push_back(a);
                    a=0;
                    }
                    }
                    lc.push_back(a);

ll m=*max_element(lc.begin(),lc.end());
ans.push_back(m);

vector<ll>loc;
a=0;
for(ll j=0;j<v.size();j++){
                    if(v[j]==1){
                         //cout<<"1"<<endl;
                    a++;
                    }
                    if(v[j]==0){
                        //cout<<"0"<<endl;
                    loc.push_back(a);
                    a=0;
                    }
                    }
                    loc.push_back(a);

ll mn=*max_element(loc.begin(),loc.end());
//cout<<m<<" "<<mn<<endl;
ll h=m;
while(h<mn){
    ans.push_back(h+1);
    h++;
}


ll ss=ans.size();
ll last=ss-1;
ll d=(n+1)-(2*ss);
for(ll i=1;i<=d;i++){
    ans.push_back(mn);
}
for(ll i=0;i<ss;i++){
    ans.push_back(ans[last]);
    last--;
}
