#include<bits/stdc++.h>
#define a 4
#define b 5
using namespace std;

// Returns length of the longest path beginning with mat[i][j].
// This function mainly uses lookup table dp[n][n]
int findLongestFromACell(int i, int j, int mat[a][b], int dp[a][b])
{
	// Base case
	if (i<0 || i>=a || j<0 || j>=b)
		return 0;

	// If this subproblem is already solved
	if (dp[i][j] != -1)
		return dp[i][j];

	// Since all numbers are unique and in range from 1 to n*n,
	// there is atmost one possible direction from any cell
	if (j<b-1 && (((mat[i][j] +1) == mat[i][j+1])||(mat[i][j] == mat[i][j+1])))
	return dp[i][j] = 1 + findLongestFromACell(i,j+1,mat,dp);

	if (j>0 && ((mat[i][j] +1 == mat[i][j-1])||(mat[i][j]== mat[i][j-1])))
	return dp[i][j] = 1 + findLongestFromACell(i,j-1,mat,dp);

	if (i>0 && ((mat[i][j] +1 == mat[i-1][j])||(mat[i][j]== mat[i-1][j])))
	return dp[i][j] = 1 + findLongestFromACell(i-1,j,mat,dp);

	if (i<a-1 && ((mat[i][j] +1 == mat[i+1][j])||(mat[i][j] +1 == mat[i+1][j])))
	return dp[i][j] = 1 + findLongestFromACell(i+1,j,mat,dp);

	// If none of the adjacent fours is one greater
	return dp[i][j] = 1;
}

// Returns length of the longest path beginning with any cell
int finLongestOverAll(int mat[a][b])
{
	int result = 1; // Initialize result

	// Create a lookup table and fill all entries in it as -1
	int dp[a][b];
	memset(dp, -1, sizeof dp);

	// Compute longest path beginning from all cells
	for (int i=0; i<a; i++)
	{
	for (int j=0; j<b; j++)
	{
		if (dp[i][j] == -1)
			findLongestFromACell(i, j, mat, dp);

		// Update result if needed
		result = max(result, dp[i][j]);
	}
	}

	return result;
}

// Driver program
int main()
{
int mat[a][b] = {{1, 1, 2, 3, 1},
					{3, 1, 2, 5, 2},
					{5, 2, 1, 5, 6},
                    {1, 3, 1, 2, 1},
};
cout << "Length of the longest path is "
		<< finLongestOverAll(mat);
return 0;
}
