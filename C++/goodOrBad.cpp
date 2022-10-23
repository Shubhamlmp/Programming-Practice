#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool isGood = 0; // boolean variable for Good string
        for (int i = 0; i <= s.size() - 3 && isGood == 0; i++)
        {
            if ((s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') || (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')) // Condition for Good string
                isGood = 1;
        }
        if (isGood == 1)
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }
}