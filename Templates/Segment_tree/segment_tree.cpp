#include<bits/stdc++.h>
using namespace std;
void buildTree(int* a,int* tree,int index,int st,int ed){
    //base case
    if(st>ed){
        return;
    }
    if(st==ed){
        tree[index]=a[st];
        return;
    }
    //Recursive case
    int mid=(st+ed)/2;
    buildTree(a,tree,2*index,st,mid);
    buildTree(a,tree,2*index+1,mid+1,ed);
    int left=tree[2*index];
    int right=tree[2*index+1];
    tree[index]=min(left,right);
    return;




}
int main(){
int a[]={1,3,2,-2,4,5};
int n=sizeof(a)/sizeof(int);
cout<<n<<endl;
int* tree=new int[4*n+1];
int index=1;
int st=0,ed=n-1;
buildTree(a,tree,index,st,ed);
for(int i=0;i<20;i++){
    cout<<tree[i]<<" ";
}

cout<<endl;



}
