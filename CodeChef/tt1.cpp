#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    long long P,S;
    cin>>P>>S;
    pair<int,int>a[100000+5];
    pair<int,int>b[100000+5];
    for (int i = 1; i <= P; ++i)
    {
        for (int j = 1; j <= S; ++j)
        {
            cin>>a[j].first;
        }
        for (int j = 1; j <= S; ++j)
        {
            cin>>a[j].second;
        }
        sort(a,a+S+1);
        long long k=a[1].second,t=10003,n=0;
        for (int j = 1; j <= S; ++j)
        {
            k=a[j].second;
            if (t>k)
            {
                n++;
            }
            t=k;
        }
        n--;
        b[i].first=n;
        b[i].second=i;
        //cout<<b[i].first<<" "<<b[i].second<<endl;
    }
    sort(b,b+P+1);
    for (int i = 1; i <= P; ++i)
    {
        cout<<b[i].second<<endl;
    }}
