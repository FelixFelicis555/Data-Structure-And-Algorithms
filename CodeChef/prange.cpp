#include<bits/stdc++.h>
using namespace std;
bool pal(long long int a){
    //string s=atoll(a);
    long long int r=0;
    long long int m=a;
    while(m)
    {
        int j=m%10;
        r=r*10+j;
        m=m/10;
        //cout<<"u";
    }
    //cout<<r<<" ";
    if(a==r)
    {
      return true;
    }
    else{
        return false;
    }


}
int main(){
double t,n;
string str1,str2;
cin>>t;
while(t--){
   cin>>n;
   str1="1";
   str2="9";
   for(int i=0;i<n-1;i++){
    str1=str1+"0";
    str2=str2+"9";
   }
   long long int low=stoll(str1);
   long long int  high=stoll(str2);
   //cout<<low<<" "<<high<<endl;
   int p=0;
   bool k;
   for(long long int i=low;i<=high;i++){
        //cout<<i<<endl;
    k=pal(i);
    if(k==true){
        p++;
    }
}
//cout<<p<<endl;
int q =(high-low+1);
int ans=(p/q);
cout<<ans<<endl;
}
return 0;
}
