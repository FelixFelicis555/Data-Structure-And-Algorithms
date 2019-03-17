#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll t,n,m,q;
string mm,nn;
cin>>t;
while(t--){
    cin>>mm;
    cin>>nn;
    int arr[nn.size()+1][mm.size()+1];
    int row[3][mm.size()+1];
    int col[nn.size()+1][3];


    for(ll i=0;i<nn.size()+1;i++){
        if(nn[i]=='1'){
            col[i+1][0]=1;}
        else if(nn[i]=='0'){
            col[i+1][0]=0;
        }
    }

    for(ll i=0;i<mm.size()+1;i++){
        if(mm[i]=='1'){
            row[0][i+1]=1;}
        if(mm[i]=='0'){
            row[0][i+1]=0;
        }
    }

    //fill row
    for(ll i=1;i<=2;i++){
        for(ll j=1;j<mm.size()+1;j++){
            if(j==1)
                {
                    if((row[i-1][j]==0)||(col[i][j-1]==0))
                    {row[i][j]=11;}
                    else if((row[i-1][j]==22)||(col[i][j-1]==22))
                    {row[i][j]=11;}
                    else
                    {
                    row[i][j]=22;}
                }
            else
            {
            if((row[i-1][j]==0)||(row[i][j-1]==0))
            {row[i][j]=11;}
            else if((row[i-1][j]==22)||(row[i][j-1]==22)){
            row[i][j]=11;}
            else
            {row[i][j]=22;}
            }


        }
    }


    //fill column
    for(ll i=1;i<nn.size()+1;i++){
        for(ll j=1;j<=2;j++){
            if(i==1){
              if((row[i-1][j]==0)||(col[i][j-1]==0))
                    {col[i][j]=11;}
                    else if((row[i-1][j]==22)||(col[i][j-1]==22))
                    {col[i][j]=11;}
                    else
                    {
                    col[i][j]=22;}
            }
            else{
               if((col[i-1][j]==0)||(col[i][j-1]==0))
                    {col[i][j]=11;}
                    else if((col[i-1][j]==22)||(col[i][j-1]==22))
                    {col[i][j]=11;}
                    else
                    {
                    col[i][j]=22;}
            }



        }
    }

    //print table;
    //Array row:

   /* for(ll i=1;i<3;i++){
        for(ll j=1;j<mm.size()+1;j++){
            cout<<row[i][j]<<" ";

        }
        cout<<endl;
    }

    //Araay col
    for(ll i=1;i<nn.size()+1;i++){
        for(ll j=1;j<3;j++){
            cout<<col[i][j]<<" ";

        }
        cout<<endl;
    }


*/
    //Queries b==row, a==col


        string val="";
        int a1,a2;
        cin>>q;
        for(int i=0;i<q;i++){
        cin>>a1>>a2;
        if(a1==1){
        if(row[a1][a2]==11){
            val+='1';
        }
        else{
            val+='0';
        }

        }
        else if(a2==1){
            if(col[a1][a2]==11){
            val+='1';
        }
        else{
            val+='0';
        }}
        else if(a1>=a2){
                if(col[a1-a2+2][2]==11){
            val+='1';
        }
        else{
            val+='0';
        }}
        else if(a1<a2){
            if(row[2][a2-a1+2]==11){
            val+='1';
        }
        else{
            val+='0';
        }
        }




}
cout<<val<<endl;



}}
