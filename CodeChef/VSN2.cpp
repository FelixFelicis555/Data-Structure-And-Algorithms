#include<bits/stdc++.h>
using namespace std;
double findroot(double A,double B,double C){
    double D,Dis,x1,x2;
    if (A==0){
		if(B==0)
            {
			return NULL ;
            }
		return (-1 * C ) / B;}
	Dis = (B*B - 4*A*C);
	cout<<Dis<<endl;
	if (Dis < 0)
		return NULL;
	D = sqrt(Dis);
	x1=(-B + D ) / (2*A);
	x2=(-B - D ) / (2*A);

	if (x1 < 0 && x2 < 0)
		return NULL;
	if (x1 > 0 && x2 < 0)
		return x1;
	if (x1< 0 && x2 > 0)
		return x2;
	return min( x1, x2 );
}
int main(){
int T;
cin>>T;
while(T--){
double px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz,r,a,b,c,x,y,z,t1,t2,t3,t4,t5,t6,w1,w2,c1,k1,k2,c2,x1,x2,ans;
double D;
cin>>px>>py>>pz;
cin>>qx>>qy>>qz;
cin>>dx>>dy>>dz;
cin>>cx>>cy>>cz;
cin>>r;
a=px-qx;
b=py-qy;
c=pz-qz;
x=px-cx;
y=py-cy;
z=pz-cz;
t1=(x*x)+y*y-r*r;
cout<<"t1 "<<t1<<endl;
t2=x*x+z*z-r*r;
cout<<"t2 "<<t2<<endl;
t3=z*z+y*y-r*r;
cout<<"t3 "<<t3<<endl;
t4=y*z;
cout<<"t4 "<<t4<<endl;
t5=x*z;
cout<<"t5 "<<t5<<endl;
t6=x*y;
cout<<"t6 "<<t6<<endl;
w1=t1*dz*dz+t2*dy*dy+t3*dx*dx;
cout<<"w1 "<<w1<<endl;
w2=(-2)*(c*dz*t1+b*dy*t2+a*dx*t3);
cout<<"w2 "<<w2<<endl;
c1=t1*c*c+b*b*t2+t3*a*a;
cout<<"c1 "<<c1<<endl;
k1=(-2)*(t4*dz*dy+t5*dz*dx+t6*dx*dy);
cout<<"k1 "<<k1<<endl;
k2=2*(t4*(c*dy+b*dz)+t5*(c*dx+a*dz)+t6*(b*dx+a*dy));
cout<<"k2 "<<k2<<endl;
c2=(-2)*(t4*b*c+t5*a*c+t6*b*a);
cout<<"c2 "<<c2<<endl;
double A=w1+k1;
double B=w2+k2;
double C=c1+c2;
cout<<A<<" "<<B<<" "<<C<<endl;
//D=sqrt(B*B-4*A*C);
ans=findroot(A,B,C);
cout<<ans<<endl;
}
return 0;
}
