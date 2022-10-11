#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) // for t number of testcases
    {
        int n;
        cin >> n; // number of element in the array

        int a[n];

        for (int i = 0; i < n; i++)
        { // taking all the elements as input
            cin >> a[i];
        }

        int minn = a[0] - 1, ans = INT_MAX; // minn will store the minimum value of a[i]-i so far
        for (int i = 1; i < n; i++)
        {
            ans = min(ans, a[i] + i + minn + 1); // we will find the min value of (minn) + a[i] + i+1 (0 based indexing)
            minn = min(minn, a[i] - i - 1);      // update the minn variable
        }
        cout << ans << "\n";
    }
    return 0;
}
