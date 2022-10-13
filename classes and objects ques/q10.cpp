// Write a program to print the volume of a box by creating a class named 'Volume' with an initialization list to initialize its length, breadth and height. (just to make you familiar with initialization lists)

#include <iostream>
using namespace std;
class Volume
{
public:
    int a;
    int b;
    int c;
    Volume(int length, int breadth, int height) : a(length), b(breadth), c(height)
    {
        cout << a * b * c;
    }
};
int main()
{

    int a;
    int b;
    int c;

    cout << "Enter length: \n";
    cin >> a;

    cout << "Enter breadth: \n";
    cin >> b;

    cout << "Enter height: \n";
    cin >> c;

    cout << "Volume of box with length " << a << " breadth " << b << " height " << c << " is ";
    Volume box(a, b, c); //Write constructor out of cout
    return 0;
}
