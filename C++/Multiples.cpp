#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b; // taking inputs

    if (a >= b && a % b == 0)
    { // checking if a and b are multiples
        cout << "Multiples" << endl;
    }
    else if (b > a && b % a == 0)
    {
        cout << "Multiples" << endl;
    }
    else
    { // if both condition fail then a and b are not multiples
        cout << "No Multiples" << endl;
    }
    return 0;
}