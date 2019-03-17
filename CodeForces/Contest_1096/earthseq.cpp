#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
 ll n,m,x,y,v,a,b,u;
 cin>>n>>m;
 int arr[n][n]={0};
 ll weight[n][n];
 /*for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }*/
 for(int i=0;i<(2*m);i++){
 cin>>a>>b;
 arr[a-1][b-1]=1;
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>weight[i][j];
    }
 }

/*for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }*/
 //Answer for different m values;
 vector< vector<int> > ans1(m);
 vector< vector<int> > ans2(m);
 vector< vector<int> > ans3(m);
 vector< vector<int> > ans4(m);
 vector< vector<int> > ans5(m);
 vector< vector<int> > ans6(m);
 //for ans1
 int f=0;
 m=0;
 for(ll i=0;i<n;i++){
    if(i%2==0){
        for(ll j=0;j<n;j++){
            if(arr[i][j]==1&&f==0){
                f=1;
                ans1[m].push_back(i+1);
                ans1[m].push_back(j+1);
            }
            else if(arr[i][j]!=1 && f==1){
                ans1[m].push_back(i+1);
                ans1[m].push_back(j+1);
            }
            else if(arr[i][j]==1 && f==1){
                ans1[m].push_back(i+1);
                ans1[m].push_back(j+1);
                f=0;
                m++;
            }
        }

    }
    else{
        for(ll j=(n-1);j>=0;j--){
                if(arr[i][j]==1&&f==0){
                f=1;
                ans1[m].push_back(i+1);
                ans1[m].push_back(j+1);
            }
            else if(arr[i][j]!=1 && f==1){
                ans1[m].push_back(i+1);
                ans1[m].push_back(j+1);
            }
            else if(arr[i][j]==1 && f==1){
                ans1[m].push_back(i+1);
                ans1[m].push_back(j+1);
                f=0;
                m++;
            }


        }

    }






 }






 //Ans2
  f=0;
 m=0;
 for(ll i=0;i<n;i++){
    if(i%2==0){
        //cout<<"f"<<endl;
        for(ll j=(n-1);j>=0;j--){
            if(arr[i][j]==1&&f==0){
                f=1;
                ans2[m].push_back(i+1);
                ans2[m].push_back(j+1);
                //cout<<"f1"<<endl;
            }
            else if(arr[i][j]!=1 && f==1){
                ans2[m].push_back(i+1);
                ans2[m].push_back(j+1);
                //cout<<"f2"<<endl;
            }
            else if(arr[i][j]==1 && f==1){
                ans2[m].push_back(i+1);
                ans2[m].push_back(j+1);
                f=0;
                m++;
                //cout<<"f3"<<endl;
            }
        }

    }
    else{
            //cout<<"f1"<<endl;
        for(ll j=0;j<n;j++){
                if(arr[i][j]==1&&f==0){
                f=1;
                ans2[m].push_back(i+1);
                ans2[m].push_back(j+1);
             //   cout<<"f4"<<endl;
            }
            else if(arr[i][j]!=1 && f==1){
                ans2[m].push_back(i+1);
                ans2[m].push_back(j+1);
               // cout<<"f5"<<endl;
            }
            else if(arr[i][j]==1 && f==1){
                ans2[m].push_back(i+1);
                ans2[m].push_back(j+1);
                f=0;
                m++;
                //cout<<"f6"<<endl;
            }


        }

    }






 }

//cout<<"l0"<<endl;
 //Ans 3
  f=0;
 m=0;
 for(ll j=0;j<n;j++){
    if(j%2==0){
        //cout<<"f"<<endl;
        //cout<<
        for(ll i=(n-1);i>=0;i--){
                            //cout<<i<<" "<<j<<" ";

            if(arr[i][j]==1&&f==0){
                f=1;
                ans3[m].push_back(i+1);
                ans3[m].push_back(j+1);
            }
            else if(arr[i][j]!=1 && f==1){
                ans3[m].push_back(i+1);
                ans3[m].push_back(j+1);
            }
            else if(arr[i][j]==1 && f==1){
                ans3[m].push_back(i+1);
                ans3[m].push_back(j+1);
                f=0;
                m++;
            }
        }
        //cout<<endl;


    }
    else{
            for(ll i=0;i<n;i++){
                //cout<<i<<" "<<j<<" ";
                if(arr[i][j]==1&&f==0){
                f=1;
                ans3[m].push_back(i+1);
                ans3[m].push_back(j+1);
            }
            else if(arr[i][j]!=1 && f==1){
                ans3[m].push_back(i+1);
                ans3[m].push_back(j+1);
            }
            else if(arr[i][j]==1 && f==1){
                ans3[m].push_back(i+1);
                ans3[m].push_back(j+1);
                f=0;
                m++;
            }


        }
        //cout<<endl;

    }
 }


 //Ans4
 f=0;
 m=0;
 for(ll j=0;j<n;j++){
    if(j%2!=0){
        //cout<<"f"<<endl;
        //cout<<
        for(ll i=(n-1);i>=0;i--){
                            //cout<<i<<" "<<j<<" ";

            if(arr[i][j]==1&&f==0){
                f=1;
                ans4[m].push_back(i+1);
                ans4[m].push_back(j+1);
            }
            else if(arr[i][j]!=1 && f==1){
                ans4[m].push_back(i+1);
                ans4[m].push_back(j+1);
            }
            else if(arr[i][j]==1 && f==1){
                ans4[m].push_back(i+1);
                ans4[m].push_back(j+1);
                f=0;
                m++;
            }
        }
        //cout<<endl;


    }
    else{
        for(ll i=0;i<n;i++){
                //cout<<i<<" "<<j<<" ";
                if(arr[i][j]==1&&f==0){
                f=1;
                ans4[m].push_back(i+1);
                ans4[m].push_back(j+1);
            }
            else if(arr[i][j]!=1 && f==1){
                ans4[m].push_back(i+1);
                ans4[m].push_back(j+1);
            }
            else if(arr[i][j]==1 && f==1){
                ans4[m].push_back(i+1);
                ans4[m].push_back(j+1);
                f=0;
                m++;
            }


        }
        //cout<<endl;

    }
 }


//Ans5
ll r1,c1;
ll c=(n+1)/2;
ll h=0;
f=0;
m=0;
c1=0,r1=0;
while(c1<c){

//top to down
ll j1=c1;
for(ll i1=c1;i1<=(n-1-c1);i1++){

        //cout<<i1+1<<" "<<j1+1<<endl;
        if(arr[i1][j1]==1&&f==0){
                f=1;
                ans5[m].push_back(i1+1);
                ans5[m].push_back(j1+1);
            }
            else if(arr[i1][j1]!=1 && f==1){
                ans5[m].push_back(i1+1);
                ans5[m].push_back(j1+1);
            }
            else if(arr[i1][j1]==1 && f==1){
                ans5[m].push_back(i1+1);
                ans5[m].push_back(j1+1);
                f=0;
                m++;

    }
}
ll i2=n-1-c1;
    for(ll j2=c1+1;j2<=(n-1-c1);j2++){
    //if(visited[i2][j2]==false){
      //  visited[i2][j2]=true;
        //cout<<i2+1<<" "<<j2+1<<endl;


    //}
    if(arr[i2][j2]==1&&f==0){
                f=1;
                ans5[m].push_back(i2+1);
                ans5[m].push_back(j2+1);
            }
            else if(arr[i2][j2]!=1 && f==1){
                ans5[m].push_back(i2+1);
                ans5[m].push_back(j2+1);
            }
            else if(arr[i2][j2]==1 && f==1){
                ans5[m].push_back(i2+1);
                ans5[m].push_back(j2+1);
                f=0;
                m++;

    }


}
//down to top
ll j3=n-1-c1;
for(int i3=n-2-c1;i3>=c1;i3--){
    //if(visited[i3][j3]==false){
      //  visited[i3][j3]=true;
        //cout<<i3+1<<" "<<j3+1<<endl;}
        if(arr[i3][j3]==1&&f==0){
                f=1;
                ans5[m].push_back(i3+1);
                ans5[m].push_back(j3+1);
            }
            else if(arr[i3][j3]!=1 && f==1){
                ans5[m].push_back(i3+1);
                ans5[m].push_back(j3+1);
            }
            else if(arr[i3][j3]==1 && f==1){
                ans5[m].push_back(i3+1);
                ans5[m].push_back(j3+1);
                f=0;
                m++;

    }


}
ll i4=c1;
for(ll j4=n-2-c1;j4>c1;j4--){
    //if(visited[i4][j4]==false){
      //  visited[i4][j4]=true;
        //cout<<i4+1<<" "<<j4+1<<endl;}
        if(arr[i4][j4]==1&&f==0){
                f=1;
                ans5[m].push_back(i4+1);
                ans5[m].push_back(j4+1);
            }
            else if(arr[i4][j4]!=1 && f==1){
                ans5[m].push_back(i4+1);
                ans5[m].push_back(j4+1);
            }
            else if(arr[i4][j4]==1 && f==1){
                ans5[m].push_back(i4+1);
                ans5[m].push_back(j4+1);
                f=0;
                m++;

    }




}
c1++;

}


//Ans 6

//ll r1,c1;
 c=(n+1)/2;
 h=0;
 f=0;
m=0;
c1=0,r1=0;
while(c1<c){

//top to down
ll j1=n-1-c1;
for(ll i1=c1;i1<=(n-1-c1);i1++){

        //cout<<i1+1<<" "<<j1+1<<endl;
        if(arr[i1][j1]==1&&f==0){
                f=1;
                ans6[m].push_back(i1+1);
                ans6[m].push_back(j1+1);
            }
            else if(arr[i1][j1]!=1 && f==1){
                ans6[m].push_back(i1+1);
                ans6[m].push_back(j1+1);
            }
            else if(arr[i1][j1]==1 && f==1){
                ans6[m].push_back(i1+1);
                ans6[m].push_back(j1+1);
                f=0;
                m++;

    }
}
//left to right
ll i2=n-1-c1;
    for(ll j2=n-2-c1;j2>=c1;j2--){
    //if(visited[i2][j2]==false){
      //  visited[i2][j2]=true;
        //cout<<i2+1<<" "<<j2+1<<endl;


    //}
    if(arr[i2][j2]==1&&f==0){
                f=1;
                ans6[m].push_back(i2+1);
                ans6[m].push_back(j2+1);
            }
            else if(arr[i2][j2]!=1 && f==1){
                ans6[m].push_back(i2+1);
                ans6[m].push_back(j2+1);
            }
            else if(arr[i2][j2]==1 && f==1){
                ans6[m].push_back(i2+1);
                ans6[m].push_back(j2+1);
                f=0;
                m++;

    }


}
//down to top
ll j3=c1;
for(int i3=n-2-c1;i3>=c1;i3--){
    //if(visited[i3][j3]==false){
      //  visited[i3][j3]=true;
        //cout<<i3+1<<" "<<j3+1<<endl;
        if(arr[i3][j3]==1&&f==0){
                f=1;
                ans6[m].push_back(i3+1);
                ans6[m].push_back(j3+1);
            }
            else if(arr[i3][j3]!=1 && f==1){
                ans6[m].push_back(i3+1);
                ans6[m].push_back(j3+1);
            }
            else if(arr[i3][j3]==1 && f==1){
                ans6[m].push_back(i3+1);
                ans6[m].push_back(j3+1);
                f=0;
                m++;

    }


}
//rightto left
ll i4=c1;
for(ll j4=c1+1;j4<(n-1-c1);j4++){
    //if(visited[i4][j4]==false){
      //  visited[i4][j4]=true;
      //cout<<"hi"<<endl;
        //cout<<i4+1<<" "<<j4+1<<endl;
        if(arr[i4][j4]==1&&f==0){
                f=1;
                ans6[m].push_back(i4+1);
                ans6[m].push_back(j4+1);
            }
            else if(arr[i4][j4]!=1 && f==1){
                ans6[m].push_back(i4+1);
                ans6[m].push_back(j4+1);
            }
            else if(arr[i4][j4]==1 && f==1){
                ans6[m].push_back(i4+1);
                ans6[m].push_back(j4+1);
                f=0;
                m++;

    }




}
c1++;

}


ll w1=0,w2=0,w3=0,w4=0,w5=0,w6=0;
vector<ll>vv;
for(ll i=0;i<m;i++){
    //cout<<"Values in ans "<<i+1<<" ";
    //cout<<ans[i].size()/2<<" ";
    for(ll j=0;j<ans1[i].size();j+=2){
        //cout<<ans[i][j]<<" ";
        w1+=weight[ans1[i][j]-1][ans1[i][j+1]-1];
    }

}
vv.push_back(w1);
for(ll i=0;i<m;i++){
    //cout<<"Values in ans "<<i+1<<" ";
    //cout<<ans[i].size()/2<<" ";
    for(ll j=0;j<ans2[i].size();j+=2){
        //cout<<ans[i][j]<<" ";
        w2+=weight[ans2[i][j]-1][ans2[i][j+1]-1];
    }

}
vv.push_back(w2);
for(ll i=0;i<m;i++){
    //cout<<"Values in ans "<<i+1<<" ";
    //cout<<ans[i].size()/2<<" ";
    for(ll j=0;j<ans3[i].size();j+=2){
        //cout<<ans[i][j]<<" ";
        w3+=weight[ans3[i][j]-1][ans3[i][j+1]-1];
    }

}
vv.push_back(w3);
for(ll i=0;i<m;i++){
    //cout<<"Values in ans "<<i+1<<" ";
    //cout<<ans[i].size()/2<<" ";
    for(ll j=0;j<ans4[i].size();j+=2){
        //cout<<ans[i][j]<<" ";
        w4+=weight[ans4[i][j]-1][ans4[i][j+1]-1];
    }

}
vv.push_back(w4);

for(ll i=0;i<m;i++){
    //cout<<"Values in ans "<<i+1<<" ";
    //cout<<ans[i].size()/2<<" ";
    for(ll j=0;j<ans5[i].size();j+=2){
        //cout<<ans[i][j]<<" ";
        w5+=weight[ans5[i][j]-1][ans5[i][j+1]-1];
    }

}
vv.push_back(w5);

for(ll i=0;i<m;i++){
    //cout<<"Values in ans "<<i+1<<" ";
    //cout<<ans[i].size()/2<<" ";
    for(ll j=0;j<ans6[i].size();j+=2){
        //cout<<ans[i][j]<<" ";
        w6+=weight[ans6[i][j]-1][ans6[i][j+1]-1];
    }

}
vv.push_back(w6);


int yy;
ll kk=*max_element(vv.begin(),vv.end());
for(ll i=0;i<4;i++){
    if(vv[i]==kk){
        yy=i+1;
        break;
    }
}

if(yy==1){
for(ll i=0;i<m;i++){

    //cout<<"Values in ans "<<i+1<<" ";
    cout<<ans1[i].size()/2<<" ";
    for(ll j=0;j<ans1[i].size();j++){
        cout<<ans1[i][j]<<" ";
    }
    cout<<endl;
}}
else if(yy==2){
for(ll i=0;i<m;i++){

    //cout<<"Values in ans "<<i+1<<" ";
    cout<<ans2[i].size()/2<<" ";
    for(ll j=0;j<ans2[i].size();j++){
        cout<<ans2[i][j]<<" ";
    }
    cout<<endl;
}}
else if(yy==3){
for(ll i=0;i<m;i++){

    //cout<<"Values in ans "<<i+1<<" ";
    cout<<ans3[i].size()/2<<" ";
    for(ll j=0;j<ans3[i].size();j++){
        cout<<ans3[i][j]<<" ";
    }
    cout<<endl;
}}
else if(yy==4){
for(ll i=0;i<m;i++){

    //cout<<"Values in ans "<<i+1<<" ";
    cout<<ans4[i].size()/2<<" ";
    for(ll j=0;j<ans4[i].size();j++){
        cout<<ans4[i][j]<<" ";
    }
    cout<<endl;
}}

else if(yy==5){
for(ll i=0;i<m;i++){

    //cout<<"Values in ans "<<i+1<<" ";
    cout<<ans5[i].size()/2<<" ";
    for(ll j=0;j<ans5[i].size();j++){
        cout<<ans5[i][j]<<" ";
    }
    cout<<endl;
}}

else if(yy==6){
for(ll i=0;i<m;i++){

    //cout<<"Values in ans "<<i+1<<" ";
    cout<<ans6[i].size()/2<<" ";
    for(ll j=0;j<ans6[i].size();j++){
        cout<<ans6[i][j]<<" ";
    }
    cout<<endl;
}}









}
