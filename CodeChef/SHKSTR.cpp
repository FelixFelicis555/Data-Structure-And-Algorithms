#include<bits/stdc++.h>
using namespace std;
string findlcp(string a,string b ){
string str;
int n1=a.length();
int n2=b.length();

for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (a[i] != b[j])
            break;
        str.push_back(a[i]);
    }

    return (str);
}
int main()
{
    int n,r,q;
    string a,p,temp;

    cin>>n;
    string v[n];
    for(int i=0;i<n;i++)
	{cin>>v[i];}
    cin>>q;
    string value;
    value=v[0];
    while(q--){
    string pre,prefix,x;
    prefix="";
    cin>>r>>p;
    for(int i=0;i<r;i++){
        x=v[i];
        pre=findlcp(x,p);
        if(prefix.length()<pre.length())
        {
                prefix=pre;
                value=x;
            }
            else if(pre.length()==prefix.length())
            {
                if(lexicographical_compare(x.begin(),x.end(),value.begin(),value.end()))
                    {
                        value=x;
                    }

            }

        }
        cout<<value<<endl;}

return 0;
}
