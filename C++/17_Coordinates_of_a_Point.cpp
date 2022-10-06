#include <iostream>
using namespace std;

int main()
{
    // Delcare float variable for x and y co-ordinates and input it
    float x, y;
    cin >> x >> y;

    // If both x and y coordinates are zero then point at on origin
    if (x == 0 && y == 0)
        cout << "Origem";

    // If both x and y coordinates are greater than zero then the point lies in first quadrant
    else if (x > 0 && y > 0)
        cout << "Q1";

    // If the x coordinate is greater than zero and y is less then point lies in fourth quadrant
    else if (x > 0 && y < 0)
        cout << "Q4";

    // If x is coordinate is less than zero and y is greater then point lies in second quadrant
    else if (x < 0 && y > 0)
        cout << "Q2";

    // If both x and y coordinates are less than zero then point lies in third quadrant
    else if (x < 0 && y < 0)
        cout << "Q3";

    // If x coordinate is zero then the point lies on y axis
    else if (x == 0 && y != 0)
        cout << "Eixo Y";

    // If x coordinate is zero then the point lies on y axis
    else if (y == 0 && x != 0)
        cout << "Eixo X";

    return 0;
}