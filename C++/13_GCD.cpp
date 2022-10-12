/*
Given two numbers A and B. Print the greatest common divisor between (A, B).

Note: The greatest common divisor (GCD) of two or more integers, which are not all zeroes, is the largest positive integer that divides each of the integers.

For example:

the GCD of 8 and 12 is 4.

because the numbers that divides both 8 and 12 are (1,2,4) and 4 is the largest one .

Input
Only one line containing two numbers A and B (1 ≤ A, B ≤ 103).

Output
Print the GCD of A and B.
*/

#include <bits/stdc++.h>
using namespace std;

int val()
{
    int a, b;
    cin >> a >> b;
    int ans = gcd(a, b);
    
    cout << ans << endl;

    return 0;
}

int main()
{
    int t = 1;
    while (t--)
    {
        val();
    }
    return 0;
}
