#include <bits/stdc++.h>
using namespace std;

void pythagoreanTriplets(int limit)
{
    int a, b, c = 0;
    int m = 2;
    int ct=0;
    while (c < limit) {
        for (int n = 1; n < m; ++n) {
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;

            if (c > limit)
                break;

            printf("%d %d %d\n", a, b, c);
            vector<int>v1{a,b,c};
            sort(v1.begin(),v1.end());
            if(v1[2]-v1[1]==1){
                ct++;
            }
        }
        m++;
    }
    cout<<ct<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    pythagoreanTriplets(n);

}
}

