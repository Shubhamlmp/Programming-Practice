/*
Given a number N. Print the summation of the numbers that is between 1 and N (inclusive).

.∑i=1Ni

Input
Only one line containing a number N (1≤N≤109)

Output
Print the summation of the numbers that are between 1 and N (inclusive).
*/

#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
 
int val()
{
    ull n;
    ull ans = 0;
  
    //Take n as input from the user
    cin >> n;
    
    //Store the result, i.e., the summation from 1 to n (both inclusive) in "ans" 
    ans = (n * (n + 1)) / 2;
    
    //Display ans
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
