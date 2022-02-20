// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the required count
int count(int n)
{
	return int((-1 + sqrt(1 + 8 * n)) / 2);
}

// Driver code
int main()
{
	int n = 12;

	cout << count(n);

	return 0;
}
