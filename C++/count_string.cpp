#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0; // sum variable stores the summation of the digits of string s
    for (int i = 0; i < s.size(); i++)
        sum = sum + s[i] - 48; // '1' - 48 = 1 as the ASCII value of 1 is 49
    cout << sum;
}