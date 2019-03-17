#include <bits/stdc++.h>
using namespace std;

int suma(int arr[], int n)
{
int    sum=0,val=0;
    for (int i=0; i <n; i++)
    {

        for (int j=i; j<n; j++)
        {
            val=0;
            for (int k=i; k<=j; k++)
                //cout << arr[k] << " ";
                {val=val|arr[k];}
            sum+=val;
            //cout << endl;
        }
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<suma(arr, n);
    return 0;
}
