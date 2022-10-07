#include <iostream>
using namespace std;

int main()
{
    // Declare the character variable and input it
    char character;
    cin >> character;

    // If the letter is in lower case then convert it into uppercase and vice versa
    if (character >= 'a' && character <= 'z')
        cout << char(character - 'a' + 'A');
    else
        cout << char(character - 'A' + 'a');

    return 0;
}