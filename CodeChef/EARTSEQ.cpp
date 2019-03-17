#include <bits/stdc++.h>
#define ll long long int

using namespace std;
ll GetNumberOfDigits (ll i)
{
    return i > 0 ? (ll) log10 ((double) i) + 1 : 1;
}

int main() {
    bool pn[15000];
    memset(pn,true,sizeof(pn));
    for(ll g=2;(g*g)<=15000;g++){
        if(pn[g]==true){
            for(ll i=g*g;i<=15000;i+=g){
                pn[i]=false;
            }
        }
    }
    vector<ll>prime;
    for(ll g=2;g<15000;g++){
        if(pn[g]==true){
            prime.push_back(g);
        }
    }
ll s=prime.size();
//cout<<s<<endl;
ll i,j,k,l,m,t,n;
cin>>t;
while(t--){
    cin>>n;
ll arr[n];
l=0;
j=0;
k=2;
for(ll i=0;i<(n);i++){
    if(i==0||i==1||i==2){
        arr[i]=prime[l%s];

        l++;
    }
    else if(k+j+1==i){

        arr[i]=arr[j];
        j++;
        k++;
    }
    else{
        arr[i]=prime[l%s];
        l++;
    }
}
if(arr[n-2]==arr[0]){
    arr[n-2]=prime[l%s];
    l++;
}
if(arr[n-1]==arr[0]||arr[n-1]==arr[1]){
    arr[n-1]=prime[l%s];
    l++;
}
/*for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
}
cout<<endl;*/
map<ll,ll>mm;
vector<ll>ans;
ll a1,a2;

for(int i=0;i<n;i++){
    a1=arr[i]*arr[(i+1)%n];
    ll d=GetNumberOfDigits(a1);
    if(mm[a1]==0&&d<=8){
        ans.push_back(a1);
        mm[a1]++;
    }
    else{
        //cout<<"ji"<<endl;

        //cout<<"di : "<<d<<endl;
        while((mm[a1]!=0)||d>=9){
            a1=prime[l%s]*arr[(i+1)%n];
            d=GetNumberOfDigits(a1);
            //cout<<"ji"<<endl;
            l++;
        }
        mm[a1]++;
        arr[i]=prime[(l-1)%s];
        ans[ans.size()-1]=arr[i]*arr[i-1];
        /*if(GetNumberOfDigits(ans[ans.size()-1])>8){
            cout<<"yes"<<endl;
        }*/


        mm[arr[i]*arr[i-1]]++;
        ans.push_back(a1);
    }
}
//cout<<ans.size()<<endl;
vector<int>vec;
map<ll,ll>mm1;
set<ll>ss;
for(ll i=0;i<ans.size();i++){
    //cout<<i<<" "<<ans[i]<<" "<<GetNumberOfDigits(ans[i])<<endl;
    cout<<ans[i]<<" ";
    if(mm1[ans[i]]==0){
        mm1[ans[i]]++;
    }
    else{
        vec.push_back(ans[i]);
        vec.push_back(i);
    }
    ss.insert(ans[i]);

}
cout<<endl;
/*for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
}
cout<<endl;*/
cout<<ss.size()<<endl;
//for(ll i=0;i<vec.size();i++){
  //  cout<<vec[i]<<endl;
//}

}}
