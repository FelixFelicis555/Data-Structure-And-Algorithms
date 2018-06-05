#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz,r,m,n,o,ACX,ACY,ACZ,p,temp,t1,t2,t3,x1,x2,c1,k1,k2,k3,y1,y2,c2,A,B,C,t;
float AC,D,ta,tb;
cin>>px>>py>>pz;
cin>>qx>>qy>>qz;
cin>>dx>>dy>>dz;
cin>>cx>>cy>>cz;
cin>>r;
m=qx-px;
n=qy-py;
o=qz-pz;
ACX=cx-px;
ACY=cy-py;
ACZ=cz-pz;
temp=(ACX*ACX)+(ACY*ACY)+(ACZ*ACZ);
cout<<"AC"<<" "<<temp<<endl;
AC=sqrt(temp);
p=temp-(r*r);
t1=ACX*ACY;
t2=ACY*ACZ;
t3=ACZ*ACX;
cout<<"t values : "<<t1<<" "<<t2<<" "<<t3<<endl;
x1=2*((t1*dx*dy)+(t2*dz*dy)+(t3*dx*dz));
x2=2*(t1*(m*dy+n*dx)+t2*(n*dz+o*dy)+t3*(m*dz+o*dx));
c1=2*(t1*m*n+t2*n*o+t3*m*o);
//cout<<"x values : "<<x1<<" "<<x2<<" "<<c1<<endl;
k1=p-(ACX*ACX);
k2=p-(ACY*ACY);
k3=p-(ACZ*ACZ);
//cout<<"k values : "<<k1<<" "<<k2<<" "<<k3;
y1=k1*(dx*dx)+k2*(dy*dy)+k3*(dz*dz);
y2=2*(k1*m*dx+k2*n*dy+k3*o*dz);
c2=(k1*m*m)+(k2*n*n)+(k3*o*o);
A=(x1-y1);
B=(x2-y2);
C=(c1-c2);
//cout<<A<<" "<<B<<" "<<C<<endl;
int s=(B*B)-(4*A*C);
//cout<<s<<endl;
D=sqrt(s);
//cout<<D<<endl;
if(A!=0){
ta=float(-B+D)/float(2*A);
tb=float(-B-D)/float(2*A);}
else{
    //cout<<"C/B : "<<float(C)/B<<endl;

    ta=float(C)/float(B);
    //ta=float(6/4);
    ta=ta*(-1);
    tb=ta;
    //ta=5.67;
    //tb=4.89;
}
//cout<<ta<<" "<<tb<<endl;
if(ta>=tb&&(ta>0)&&(tb>0)){
    cout<<setprecision(10)<<tb<<endl;
}
if(ta<tb&&(ta>0)&&(tb>0)){
    cout<<setprecision(10)<<ta<<endl;
}






}



return 0;}

