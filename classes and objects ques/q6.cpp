// Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

#include <iostream>
using namespace std;

class Area
{
private:
    double length;
    double breadth;

public:
    void setDim(double l, double b)
    {
        length = l;
        breadth = b;
    }
    double getArea()
    {
        return length * breadth;
    }
};

int main()
{
    Area rectangle;
    double l;
    double b;
    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    rectangle.setDim(l, b);

    cout << "Area of rectangle of length " << l << " and breadth " << b << " is " << rectangle.getArea();

    return 0;
}