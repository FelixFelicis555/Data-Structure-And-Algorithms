#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}
int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<int>pr;
vector<int>npr;
for(int i=0;i<n;i++){
    if(isPrime(a[i])){
        pr.push_back(i+1);
    }
    else{
        npr.push_back(i+1);
    }
}
int a1=npr[0];
for(int i=0;i<pr.size();i++){
    cout<<a1<<" "<<pr[i]<<endl;
}
if(npr.size()>1){
    cout<<a1<<" "<<npr[1]<<endl;
}
for(int i=1;i<(npr.size()-1);i++){
    cout<<npr[i]<<" "<<npr[i+1]<<endl;
}

}
