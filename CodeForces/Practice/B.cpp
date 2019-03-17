#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> s;
  int n,a;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    s.push_back(a);
  }
  sort(s.begin(),s.end());
  int min1=*s.begin();

  int min2=*(++s.begin());

  int max1=*(s.rbegin());
  int max2=*(++s.rbegin());

  //cout<<max1<<" "<<max2<<" "<<min1<<" "<<min2<<endl;
  int f1=max2-min1;
  int f2=max1-min2;
if(f1>=f2){
    cout<<f2<<endl;
  }
  else{
    cout<<f1<<endl;
  }
}






