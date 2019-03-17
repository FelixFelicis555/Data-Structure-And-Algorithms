// A Dynamic Programming based solution for 0-1 Knapsack problem
#include<stdio.h>

// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }
int knapSack(int W, int wt[], int val[], int n)
{
    int k[n+1][W+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;i<W+1;j++){
            if(i==0||j==0)
                {k[i][j]=0;}
            else if(wt[i-1]<=j)
                {k[i][j]=max(k[i-1][j],k[i-1][j-wt[i]]+val[i-1]);}
            else
                k[i][j]=k[i-1][j];

        }
    }



}
int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}
