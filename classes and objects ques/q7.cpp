// Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of its length and breadth as parameters of its constructor and having a function named 'returnArea' which returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

#include <iostream>
using namespace std;

class Area
{
public:
    float length;
    float breadth;
    Area(float l, float b)
    {
        length = l;
        breadth = b;
    }
    float returnArea()
    {
        return length * breadth;
    }
};

int main()
{

    int l;
    int b;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;
    Area rectangle(l, b);

    cout << "Area of rectangle with length " << l << " and " << b << " is " << rectangle.returnArea();

    return 0;
}