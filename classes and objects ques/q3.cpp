// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.

#include <iostream>
using namespace std;

class Triangle
{
public:
    double area(double b, double h)
    {
        return 0.5 * b * h;
    }
    double perimeter(double s1, double b, double s3)
    {
        return s1 + b + s3;
    }
};

int main()
{
    Triangle isoceles;
    double b;
    double h;

    cout << "Enter base: ";
    cin >> b;
    cout << "Enter height: ";
    cin >> h;

    double s1;
    double s2;
    double s3;

    cout << "Enter side 1: ";
    cin >> s1;

    cout << "Enter side 2(base): " << b << endl;

    cout << "Enter side 3: ";
    cin >> s3;

    cout << "The area of Triangle with height " << h << " and base " << b << " is " << isoceles.area(b, h) << endl;
    cout << "The perimeter of Triangle with sides " << s1 << " , " << b << " and " << s3 << " is " << isoceles.perimeter(s1, b, s3);

    return 0;
}