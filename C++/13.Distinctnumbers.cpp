#include <bits/stdc++.h>
using namespace std;

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
   int n;  // size of the array
    cin >> n;
    vector<int>v(n); // input vector
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int>hash(2001, 0); // for storing the element that is present in the vector
    // -1000<=A[i]<=1000
    // we can only having positive indices in an array
    // -1000+1000<=A[i]+1000<=1000+1000
    // 0<=A[i]<=2000
    // All the numbers can be present in an array of size 2000
    for (int i = 0; i < n; i++)
    {
        hash[v[i] + 1000] = 1;
    }
    int ans = 0;
    for (int i = 0; i <= 2000; i++)
    {
        if (hash[i])
            ans++;
    }
    cout << ans << "\n";


    

   return 0;

}
