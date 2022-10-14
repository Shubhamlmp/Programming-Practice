#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        // just swapping n,m if n > m
        // in this way we can make sure that n < m
        if (x > y)
        {
            int tmp = x;
            x = y;
            y = tmp;
        }
        int sum = 0;
        // because given that print odd numbers exclusive of n,m we start our for loop from n+1 and end at m-1
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }

    return 0;
}