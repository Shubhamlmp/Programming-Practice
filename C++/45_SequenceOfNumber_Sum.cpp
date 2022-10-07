#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        int n, m;
        cin >> n >> m;
        // as given in problem statement if either one of n or m <= 0 then stop taking input and print nothing.
        if (n <= 0 || m <= 0)
            break;
        else
        {
            int sum = 0;
            // just swapping n,m if n > m
            // in this way we can make sure that n < m
            if (n > m)
            {
                int tmp = n;
                n = m;
                m = tmp;
            }
            // calculating sum for numbers between n and m
            for (int i = n; i <= m; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
    }
    return 0;
}