#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the Number ,your table upto 10 will be created :-   ";
    int x;
    cin >> x;
    cout << " " << endl;
    cout << " " << endl;
    cout << "The Table of " << x << " is"
         << " Here 👇" << endl;
    cout << " " << endl;
    cout << "_____________" << endl;
    cout << " " << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << "•  "<< x << "X" << i << "=" << (x * i) << endl;
    }
    cout << " " << endl;
    cout << "_____________" << endl;
    cout << " " << endl;

    return 0;
}