#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
string str1,str2,str3,str4;
cin>>t;
while(t--){
   cin>>n;
   str1="1";
   str3="1";
   str2="1";
   str4="1000000000000000000000";
   //p=pow(10**(n//2));
   //p=pow(10**(n//2+1));

        int c=0;
   if(n%2==0){
        /*for(int i=0;i<n/2;i++){
            str1=str1+"0";
            c++;
        }*/
        c=n/2;

   }
   else {
    /*for(int i=0;i<n/2+1;i++){
            str1=str1+"0";
            c++;
        }*/
        c=n/2+1;
   }
   if(n>22){
    for(int i=0;i<n-c-22;i++){
            str4=str4+"0";
           }
   }
   else{
   for(int i=0;i<n-c;i++){
            str3=str3+"0";
           }}


   cout<<str1<<" "<<str3<<endl;
}
return 0;
}


