#include <bits/stdc++.h>
using namespace std;

int main()
{ 

   string s;
    cin >> s;
    int n = s.size();


    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == '?' && s[n - 1 - i] == '?')  // both characters are ? assign both of them to 'a'
        {
            s[i] = 'a';
            s[n - 1 - i] = 'a';
        }
        else if (s[i] == '?' && s[n - 1 - i] != '?')  // predefined for palindrome
        {
            s[i] = s[n - 1 - i];
        }
        else if (s[i] != '?' && s[n - 1 - i] == '?')  // predefined for palindrome
        {
            s[n - 1 - i] = s[i];
        }
    }

    if (n & 1)  // for odd length string
    {
        if (s[n / 2] == '?')  // checking middle character
        {
            s[n / 2] = 'a';
        }
    }
    cout << s << endl;






  return 0;
}
