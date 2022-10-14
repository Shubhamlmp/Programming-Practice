// Add two distances in inch-feet by creating a class named 'AddDistance'.

#include <iostream>
#include <string>
using namespace std;
class AddDistance
{
public:
    int inch, feet;
    void addinch(AddDistance num1, AddDistance num2)
    {
        inch = num1.inch + num2.inch;
        cout << inch;
    }
    void addfeet(AddDistance num1, AddDistance num2)
    {
        feet = num1.feet + num2.feet;
        cout << feet;
    }
};
int main()
{
    AddDistance num1, num2, sum;
    int a;
    int b;
    int c;
    int d;

    cout << "Enter length of distance 1: ";
    cin >> a >> b;

    cout << "Enter length of distance 2: ";
    cin >> c >> d;

    num1.feet = a;
    num2.feet = c;

    num1.inch = b;
    num2.inch = d;

    cout << "Sum of " << num1.feet << " feet " << num1.inch << " inch "
         << "and " << num2.feet << " feet " << num2.inch << " inch "
         << "is ";
    sum.addfeet(num1, num2);
    cout << " feet ";
    sum.addinch(num1, num2);
    cout << " inch.";

    return 0;
}