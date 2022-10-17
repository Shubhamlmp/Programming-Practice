#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int minimin_value = INT_MAX, minimum_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < minimin_value)
        {
            minimin_value = a[i];
            minimum_count = 1;
        }
        else if (a[i] == minimin_value)
        {
            minimum_count++;
        }
    }

    if (minimum_count % 2)
        cout << "Lucky";
    else
        cout << "Unlucky";

    return 0;
}
