/*

Recaman's sequence

It is basically a function with domain and co-domain as natural numbers and 0. It is recursively defined as below: 
Specifically, let a(n) denote the (n+1)-th term. (0 is already there). 

The rule says:

a(0) = 0,
if n > 0 and the number is not 
   already included in the sequence,
     a(n) = a(n - 1) - n 
else 
     a(n) = a(n-1) + n. 


*/


#include <bits/stdc++.h>
using namespace std;

// Prints first n terms of Recaman sequence
void recaman(int n)
{
	if (n <= 0)
	return;

	// Print first term and store it in a hash
	printf("%d, ", 0);
	unordered_set<int> s;
	s.insert(0);

	// Print remaining terms using recursive
	// formula.
	int prev = 0;
	for (int i=1; i< n; i++)
	{
		int curr = prev - i;

		// If arr[i-1] - i is negative or
		// already exists.
		if (curr < 0 || s.find(curr) != s.end())
		curr = prev + i;

		s.insert(curr);

		printf("%d, ", curr);
		prev = curr;
	}
}

// Driver code
int main()
{
	int n = 17;
	recaman(n);
	return 0;
}
