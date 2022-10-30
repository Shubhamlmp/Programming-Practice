#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>  ordered_set;
// member functions :
// 1. order_of_key(k) : number of elements strictly lesser than k
// 2. find_by_order(k) : k-th element in the set

#ifndef ONLINE_JUDGE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
	cerr << name << " = " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr(names + 1, ','); cerr.write(names, comma - names) << " = " << arg1 << endl; __f(comma + 1, args...);
}
#define seed 127
#else
#define trace(...) 42
#define seed chrono::steady_clock::now().time_since_epoch().count()
#endif





void init_code()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

}




void SOLVE(int testcase)
{
	int n, m;
	cin >> n >> m;
	long long sum = 0;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int last = n - 1;
	while (m--)
	{
		sum += v[last--];
	}
	cout << sum << "\n";






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

	YK out;

}
