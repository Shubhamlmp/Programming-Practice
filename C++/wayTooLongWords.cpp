#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // t for test cases
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s; // string input
        if (s.size() <= 10)
            cout << s << endl;
        else
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
    }
}