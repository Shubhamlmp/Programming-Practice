#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ',') // comma conversion to space
            s[i] = ' ';
        else if (s[i] >= 65 && s[i] <= 90) // capital to small
            s[i] = s[i] + 32;
        else if (s[i] >= 97) // small to capital
            s[i] = s[i] - 32;
        else
            s[i] = s[i];
    }
    cout << s;
}