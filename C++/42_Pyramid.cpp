#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // n is the number of lines to be printed

    for (int i = 0; i < n; i++)
    { // this for loop will be for number of lines

        for (int j = 0; j <= i; j++)
        { // for each line,  we will print i+1 time of *
            cout << "*";
        }
        cout << "\n"; // seperating lines using newline
    }

    return 0;
}
