#include <iostream>
using namespace std;
int main()
{
    // Invert Pyramid made from Asterisk
    int rows, i, j, space;
    cout << "Enter Number of Rows";
    cin >> rows;
    cout << "\n";
    for (i = rows; i >= 1; i--)
    {
        for (space = 0; space < rows - i; ++space)
            cout << " ";
        for (j = i; j <= 2 * i - 1; ++j)
            cout << "*";
        for (j = 0; j < i - 1; ++j)
            cout << "*";
        cout << endl;
    }
    return 0;
}