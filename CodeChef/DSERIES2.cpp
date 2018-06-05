#include<bits/stdc++.h>
#define MAX 1000000000000000
using namespace std;

int multiply(int x, int res[], int res_size)
{
    int carry = 0;  // Initialize carry

    // One by one multiply n with individual digits of res[]
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;

        // Store last digit of 'prod' in res[]
        res[i] = prod % 10;

        // Put rest in carry
        carry  = prod/10;
    }
}

int factorial(int a){

    // single line to find factorial
    int res[MAX];

    // Initialize result
    res[0] = 1;
    int res_size = 1;

    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);

    cout << "Factorial of given number is \n";
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];

}
}
void factor()
{
    vector<int> fact;
    int n = MAX;
    fact[0]=1;
    for(int i=1;i<=n;i++){
        fact[i]=factorial(i);
    }
}
int main(){
    factor();



return 0;}
