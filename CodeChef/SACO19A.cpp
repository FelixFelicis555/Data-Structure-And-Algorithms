#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main(){
    FAST;
  int t,n,q,x;
  char l;
  string s,s1,s2;
  cin>>t;
  while(t--){
    cin>>n>>q;
    string can[n][3];
    string val[n][2];
    int arr[n]={0};
    vector<set<string>>v(n);
    for(int i=0;i<(n*3);i++){
        cin>>x>>s>>l;
        if(l=='Y'){
        can[x-1][0]=s;
        }
        else{
            v[x-1].insert(s);
            //val[x-1][arr[x-1]]=s;
            //arr[x-1]++;
        }
    }
    for(int i=0;i<n;i++){
        //auto j;
        auto jj=v[i].begin();
        s1=*(jj++);
        //jj=jj++;
        s2=*(jj);
        //cout<<s1<<" "<<s2<<endl;
        can[i][1]=s1;
        can[i][2]=s2;

    }
    /*for(int i=0;i<n;i++){
        cout<<can[i][0]<<" "<<can[i][1]<<" "<<can[i][2]<<endl;
    }*/
    int a,b;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        cout<<can[a-1][b-1]<<endl;
    }
    }
  }




