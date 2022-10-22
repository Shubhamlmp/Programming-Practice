/*
Given two strings S and T. Print 2 lines that contain the following in the same order:

Print the length of S and T separated by space.
Print a new string that contains S and T separated by a space.
For more clarification see the example below.

Input
The first line contains a string S (1 ≤ |S| ≤ 103) where |S| is the length of S.

The second line contains a string T (1 ≤ |T| ≤ 103) where |T| is the length of T.

Output
Print the answer required above.
*/
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s, t;
    cin >> s>> t;
    cout << s.size() << " " << t.size() << endl;
    cout << s << " " << t << endl;
    
    return 0;
}
