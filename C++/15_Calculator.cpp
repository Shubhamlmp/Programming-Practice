#include <iostream>
using namespace std;

int main()
{
    // Delcare variable A and B to store number where S stores the arithmetic operator
    int A, B;
    char S;

    // Input the arithmetic expression
    cin >> A >> S >> B;

    // Match the arithmetic operator and print appropriate result accordingly
    if (S == '+')
        cout << A + B;
    else if (S == '-')
        cout << A - B;
    else if (S == '*')
        cout << A * B;
    else if (S == '/')
        cout << A / B;

    return 0;
}