#include<iostream>
#include<cstdlib>

using namespace std;

main()
{
   int n, max, num, c;

   cout << "Enter the number of random numbers you want ";
   cin >> n;
   cout << "Enter the maximum value of random number ";
   cin >> max;

   cout << "Random numbers from 0 to " << max << " are:" << endl;

   int randNum = rand()%(max-1 + 1) + 1;

   return 0;
}

