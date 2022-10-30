#include <bits/stdc++.h>
using namespace std;


void init_code()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

}


void rec(int ind, int arr[], int &ans)
{
	if (ind < 0)
		return;
	ans = max(ans, arr[ind]);
	rec(ind - 1, arr, ans);
}


void SOLVE(int testcase)
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int ans = INT_MIN;
	rec(n - 1, arr, ans);
	cout << ans << "\n";
}


signed main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	init_code();

	int testcase = 1;
	// cin >> testcase;

	for (int i = 1; i <= testcase; i++)
	{
		SOLVE(i);
	}

	return 0;

}
