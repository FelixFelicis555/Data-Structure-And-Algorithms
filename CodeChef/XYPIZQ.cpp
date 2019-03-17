#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll p,t,n,x,y,z,numerator,denominator;
    cin>>p;
    while(p--){
        cin>>n>>t>>x>>y>>z;
        if(t==1){
            if((x-y)==1 && (y-z)==1){
                numerator=2*n+2-y;
                denominator=2*n+1;
            }
            else if((y-x)==1 && (y-z)==1){
                denominator=2*n+1;
                numerator=y-1;
                }
            else if((x-y)==1 && (z-y)==1){
                denominator=2*n+1;
                numerator=y+1;
            }
            else if((y-x)==1 && (z-y)==1){
                denominator=2*n+1;
                numerator=2*n-y;

            }

        }
        else if(t==2){
            if((x-y)==1 && (y-z)==1){
                numerator=2*n-2*y+1;
                denominator=2*n+1;
            }
            else if((y-x)==1 && (z-y)==1){
                denominator=2*n+1;
                numerator=2*n-2*y+1;
            }
        }
        else if(t==4){
            if((x-y)==1 && (y-z)==1){
                denominator=2*n+1;
                numerator=2*n-2*y+1;
            }
            else if((y-x)==1 && (z-y)==1){
                denominator=2*n+1;
                numerator=2*n-2*y+1;
            }
        }
        else if(t==3){
            if((x-y)==1 && (y-z)==1){
                numerator=2*n-y;
                denominator=2*n+1;
            }
            else if((y-x)==1 && (y-z)==1){
                denominator=2*n+1;
                numerator=y-1;

            }
            else if((x-y)==1 && (z-y)==1){
                denominator=2*n+1;
                numerator=y+1;
            }
            else if((y-x)==1 && (z-y)==1){
                denominator=2*n+1;
                numerator=2*n+2-y;
            }
        }
           ll d=__gcd(numerator,denominator);
           cout<<numerator/d<<" "<<denominator/d<<endl;






    }








}
