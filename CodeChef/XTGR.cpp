#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,x,b;
cin>>n>>m>>x;
vector<int>s;
vector<int>t;
for(int i=0;i<n;i++){
    cin>>b;
    s.push_back(b);
}
for(int i=0;i<m;i++){
    cin>>b;
    t.push_back(b);
}
//sort(s.begin(),s.end());
//sort(t.begin(),t.end());
int maxs,mins,mint,maxt;
maxs=*max_element(s.begin(),s.end());
mins=*min_element(s.begin(),s.end());
maxt=*max_element(t.begin(),t.end());
mint=*min_element(t.begin(),t.end());
int ch=(maxs-mins)+(maxt-mint);
int h1=distance(s.begin(), max_element(s.begin(),s.end()));
int h2=distance(t.begin(), max_element(t.begin(),t.end()));
s[h1]=s[h1]-x;
t[h2]=t[h2]-x;
int te=100000;
vector<int>ans;
ans.push_back(ch);
while(te>ch){
maxs=*max_element(s.begin(),s.end());
mins=*min_element(s.begin(),s.end());
maxt=*max_element(t.begin(),t.end());
mint=*min_element(t.begin(),t.end());
te=ch;
ch=(maxs-mins)+(maxt-mint);
//cout<<maxs<<" "<<mins<<" "<<maxt<<" "<<mint<<" "<<ch<<endl;
h1=distance(s.begin(), max_element(s.begin(),s.end()));
h2=distance(t.begin(), max_element(t.begin(),t.end()));
s[h1]=s[h1]-x;
t[h2]=t[h2]-x;
ans.push_back(ch);
}
/*for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
}*/
cout<<ans[ans.size()-2]<<endl;
}







