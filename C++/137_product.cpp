#include<bits/stdc++.h>
using namespace std;

long long int answer(int L, int R, int M)
{
	long long int ans = 1LL;

	for (int i = L; i <= R; i++)
	{
		ans = (ans * i) % M;
	}

	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int L, R, M;
	cin >> L >> R >> M;

	cout << answer(L, R, M);

}