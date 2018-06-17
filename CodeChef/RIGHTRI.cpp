#include<bits/stdc++.h>
using namespace std;
int main(){
int count=0;
int n;
cin>>n;
while(n--){
    int x1,x2,x3,y1,y3,y2;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    float d1=(pow((x1-x2),2)+pow((y1-y2),2));
    float d2=(pow((x2-x3),2)+pow((y2-y3),2));
    float d3=(pow((x1-x3),2)+pow((y1-y3),2));
    if((d1+d2==d3)||(d1+d3==d2)||(d2+d3==d1)){
        count++;
       }
}
        cout<<count<<endl;
return 0;
}
