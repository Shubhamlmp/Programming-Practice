#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef map<ll,ll> ml;
typedef vector<char> vc;
typedef vector<double> vdb;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<vector<ll>> vvl;
typedef pair<int, int> pi;        //inserting values: pi = make_pair(3,2); printing values: cout<<pi.first<<" "<<pi.second;
typedef vector<pair<ll,ll>> vp;
#define print2d(dp,n,m) for(int i=0;i<=n;i++){for(int j=0;j<=m;j++)cout<<dp[i][j]<<" ";cout<<"\n";}
#define loop(i,x,n) for(ll i=x;i<=n;i++)
#define rloop(i,x,n) for(ll i=x;i>=n;i--)
#define fill(a,b) memset(a, b, sizeof(a))
#define pb push_back
#define mp make_pair
#define mod 1000000007

int minCost(string& s)
{
	// Initially all characters are un-seen
	bool alphabets[26] = { false };

	// Marking seen characters
	for (int i = 0; i < s.size(); i++)
		alphabets[s[i] - 97] = true;

	// Count total seen character, and that
	// is the cost
	int count = 0;
	for (int i = 0; i < 26; i++)
		if (alphabets[i])
			count++;

	return count;
}

int main()
{
	string s; 
    cin>>s;
	cout << "Cost to construct :"
		<< s << " is " << minCost;

	return 0;
}
