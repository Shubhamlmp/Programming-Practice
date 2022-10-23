#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, sum, store, b, c, i, arm;
    cout << "enter any number for checking armstrong number\n";
    cin >> arm;
    store = num = arm;
    i = 0;
    sum = 0;
    while (store > 0)
    {
        b = store % 10;
        i++;
        store = store / 10;
    }

    while (num > 0)
    {
        c = num % 10;
        sum = pow(c, i) + sum;
        num = num / 10;
    }

    if (sum == arm)
    {
        cout << arm << "  is a armstrong number" << endl;
    }
    else
    {
        cout << arm << "  is not a armstrong number";
    }

    return 0;
}