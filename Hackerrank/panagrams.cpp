#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int chars=26,i;
    int freq[chars]={0};
    for(i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }
    for(i=0;i<chars;i++){
        if(freq[i]==0){
            cout<<"not pangram"<<endl;
            break;
        }
    }
    if(i==chars){
        cout<<"pangram"<<endl;
    }



    return 0;
}




