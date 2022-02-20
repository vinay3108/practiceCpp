// CPP Program to check if a number can
// be written as sum of three consecutive
// integers.
#include <bits/stdc++.h>
using namespace std;

// function to check if a number can be written as sum of
// three consecutive integer.
void checksum(long long int n)
{
	// if n is 0
    if(n%3==0)
    {
        cout<<n/3-1<<" "<<n/3<<" "<<n/3+1;
    }
    else{
        cout<<"-1";
    }
}

// Driver Program
int main()
{
	long long int  n = 254003444;
	checksum(n);
	return 0;
}
