/*
Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).
 */

#include <bits/stdc++.h>
using namespace std;

int val()
{
    long long a, b, c, d;
    //Take input from the user
    cin >> a >> b >> c >> d;
    long long x = 0;
    //Store the result of the given formula in x
    x = (a * b) - (c * d);
    //Print the result
    cout << "Difference = " << x << endl;
 
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
