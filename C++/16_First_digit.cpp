#include <iostream>
using namespace std;

int main()
{
    // Declare variable to store the input number and first digit of inputted number
    int number, firstDigit;
    cin >> number;

    // Find the first digit of number
    while (number != 0) {
        firstDigit = number;
        number /= 10;
    }

    // If first number is completely divisible by 2 then print EVEN otherwise print ODD
    (firstDigit % 2 == 0) ? cout << "EVEN" : cout << "ODD";

    return 0;
}