#include<bits/stdc++.h>
using namespace std;

//Binary Exponentiation is a technique with help of which we can easily calculate a power b.

//Binary Exponentiation using recursion
long long binExp(int a, int n)
{
	//base case
	if (n == 0)
		return 1;
	if (n == 1)
		return a;

	long long ans = binExp(a, n / 2);
	if (n % 2 == 0)
	{
		return ans * ans;
	}
	else
	{
		return a * ans * ans;
	}
}

//normal way to find a power n
int normPow(int a, int n)
{
	int ans = 1;
	for (int i = 1; i <= n; i++)
	{
		ans = ans * a;
	}
	return ans;
}

//Binary Exponentiation using iteration
int biniter(int a, int b)
{
	int ans = 1;

	while (b)
	{
		if (b & 1)
		{
			ans = ans * a;
		}
		a = a * a;
		b = b >> 1;
	}

	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, n;
	cin >> a >> n;

	// cout << binExp(a, n) << "\n";
	// cout << normPow(a, n) << "\n";
	cout << biniter(a, n);
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}

//Code given by Aditya Singh
