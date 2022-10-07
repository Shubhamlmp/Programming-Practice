#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch; // input
    if (ch >= 'a' && ch <= 'z')
    { // condition if it is a small letter
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    { // condition if it is a capital letter
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else
    { // otherwise it is sure to be a digit
        cout << "IS DIGIT" << endl;
    }
    return 0;
}