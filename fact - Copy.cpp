#include <iostream>
using namespace std;

// A tail recursive function to calculate factorial
int fact( int n,  int a)
{
	if (n <= 1)
		return a;

	return fact(n - 1, n * a);
}

// A wrapper over factTR


// Driver program to test above function
int main()
{
	cout << fact(5,1);
	return 0;
}
