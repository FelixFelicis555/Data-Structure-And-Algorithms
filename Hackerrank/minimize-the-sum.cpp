#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
int main()
{
    int n,x;
    cin>>n;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++){
            cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
            cin>>x;
        b.push_back(x);
    }
    int l,r,min_val,l1,r1,k,k1,j,p;
    l=a[0];
    r=b[0];
    vector<int>ss;
    for(int i=l;i<=r;i++){
            //cout<<"oi"<<l<<endl;
        int sum=0;
        j=1;p=i;
        while(j<n){
                //cout<<"oj"<<j<<endl;
            min_val=INF;
            l1=a[j];r1=b[j];
            if(abs(p-l1)>abs(p-r1))
            {
                min_val=abs(p-r1);
                p=r1;

            }
            else{
                min_val=abs(p-l1);
                p=l1;
            }
            /*for(k=l1;k<=r1;k++)
                {
                //cout<<"ok"<<k<<endl;
                if(abs(p-k)<min_val){
                        //cout<<"p"<<endl;
                    min_val=abs(p-k);
                    k1=k;
                }
    }*/
            //cout<<min_val<<" "<<k1<<endl;
            sum=sum+min_val;
            j++;
            }
            //cout<<"sum "<<sum<<endl;
            ss.push_back(sum);
        }
        /*for(int i=0;i<ss.size();i++){
            cout<<ss[i]<<" ";
        }*/
        cout<<(*min_element(ss.begin(),ss.end()))-1<<endl;






        }


