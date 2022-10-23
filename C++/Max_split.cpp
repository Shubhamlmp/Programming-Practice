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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    loop(cases,1,t)
    {
        long long int n;
        cin>>n;
        vector<long long> ans;

        if(n%2)return {};

        long long i = 2;
        long long crSum=0;
		
        while((crSum+i)<= n)
        {
            ans.push_back(i);
            crSum+=i;
            i+=2;
        }
		
		// add remaining difference to the last value in answer list
		int sz = ans.size();
        ans[sz-1] += (n-crSum);

        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
        // cout<<"Case #"<<cases<<": "<<ans<<endl;
    }
    return 0;
}