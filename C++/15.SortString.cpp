#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int>cnt(26, 0);// counting the occurence of each character in the string
    for (auto &i : s)
    {
        cnt[i - 'a']++;
    }

    string ans = "";
    for (int i = 0; i < 26; i++)
    {
        // adding cnt[i] times the ith character
        while (cnt[i]--)
        {
            ans += char(i + 'a');
        }
    }
    cout << ans << "\n";
    return 0;
}
