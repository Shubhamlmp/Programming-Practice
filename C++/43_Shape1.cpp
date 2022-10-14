#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // ! here toPrint keeps track of number of "#" we need to print in each row
    int toPrint = n;
    for (int i = 0; i < n; i++)
    {
        // first for loop is for number of rows.
        for (int j = 0; j < toPrint; j++)
        {
            //  this for loop print "#" in each row.
            cout << "*";
        }
        cout << endl;
        toPrint--;
    }
    return 0;
}