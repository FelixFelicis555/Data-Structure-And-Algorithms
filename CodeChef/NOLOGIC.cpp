#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;

        getline(cin,s);
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            int j=int(s[i]);
            if(j>=65&&j<=90){
                arr[j-65]+=1;
            }
            else if(j>=97&&j<=122){
                arr[j-97]+=1;
            }
        }
        int f=0;
        for(int i=0;i<26;i++){
            if(arr[i]==0){
                f=1;
                char s=i+97;
                cout<<s<<endl;
                break;
            }
        }
        if(f!=1){
           cout<<"~"<<endl;
        }

    }








}
