#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
string s1,s2;
cin>>s1>>s2;
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
cout<<s1<<endl;
cout<<s2<<endl;
for(i=0;i<s1.length();i++){
    if (s1[i]!=s2[i]){
        cout<<"No"<<endl;
        break;
    }
}
/*cout<<i<<endl;
cout<<s1.length()<<" "<<s2.length()<<endl;*/
if((i==s1.length())&&(i==s2.length()))
{
cout<<"Yes"<<endl;
}

return 0;


}
