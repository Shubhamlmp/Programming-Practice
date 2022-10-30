#include <iostream>
using namespace std;

int main()
{
    char mychar;
    cout << "Enter a Character  : ";
    cin >> mychar;

    while (mychar == 'x')
    {
        cout << "Iam A Programmer"
             << "     |     Enter a Character  : ";
        cin >> mychar;
    }

    return 0;
}