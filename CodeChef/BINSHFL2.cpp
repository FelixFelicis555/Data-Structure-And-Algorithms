#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
unsigned countBits(unsigned int number)
{
return (int)log2(number)+1;
}
int findclosest(int n)
{
    int temp = n;
    int x = 0;
    int y= 0;
    while ((temp & 1) == 1)
    {
        y++;
        temp = temp >> 1;
    }
    if (temp == 0)
        return -1;

    while (((temp & 1) == 0) && (temp!= 0))
    {
        x++;
        temp  = temp >> 1;
    }
    int p = x + y;
    n = n & ((~0) << (p + 1));
    int mask = (1 << (y + 1)) - 1;

    n = n | mask << (x - 1);

    return n;
}
int grecomb(int s,int n){
int c=0;
for(int i=1;i<=s;i++){
    c=c+pow(2,n-i);
}
//cout<<"gre : "<<c<<endl;
return c;
}
int smallcomb(int s,int n){
int c=0;
for(int i=0;i<s;i++){
    c=c+pow(2,i);
}
//cout<<"small : "<<c<<endl;
return c;
}
int main()
{   int t;
    cin>>t;
    while(t--){
    int a,b,na,nb,M,g;
    cin>>a>>b;
    na=countBits(a);
    nb=countBits(b);
    int op=0;
    int k=b-a;

    if(a==b)
    {
        op=0;
    }
    else if(b==0){
        op=-1;
    }
    else if(b==1){
        if(a==0){
            op=1;
        }
        else{
            op=-1;
        }
    }
    else if((a<b)&&(b!=0||b!=1))
        {
        while(a<b)
        {
            na=countBits(b);
            //cout<<"l..na : "<<na<<endl;
            int s=__builtin_popcount(a);
            //cout<<"s : "<<s<<endl;
            g=grecomb(s,na);
            //cout<<"g : "<<g<<endl;
            if (g<b)
            {
                a=g+1;
                op=op+1;
            }
            else
            {
                while(g>=b)
                {
                g=findclosest(g);
                //cout<<"close : "<<g<<endl;
                }
                a=g+1;
                op=op+1;
            }
        }
        }
       /* else if((b==0)&&(a>b)){
            op=-1;
        }*/
        else if(a>b&&(b!=0||b!=1))
            {
                while(a!=b){
                na=countBits(a);
                //cout<<"l..na : "<<na<<endl;
                int s=__builtin_popcount(a);
                //cout<<"s : "<<s<<endl;
                g=smallcomb(s,na);
                if(g>b)
                {
                    a=g+1;
                    op=op+1;
                }
                else
                {
                    int x=a;
                    //cout<<a<<endl;
                    while(x>=b){
                        x=findclosest(x);
                        //cout<<"close : "<<x<<endl;
                        }
                    if(x<0){
                        op=-1;
                        break;
                    }
                    a=x+1;
                    op=op+1;
                }
                }
}else{}


 cout<<op<<endl;


    }
    }






