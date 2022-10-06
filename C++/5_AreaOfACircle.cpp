/*
Given a number R calculate the area of a circle using the following formula:

Area = π * R2.

Note: consider π = 3.141592653.

Input
Only one line containing the number R (1  ≤  R  ≤  100).

Output
Print the calculated area, with 9 digits after the decimal point.
*/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653

int val()
{
    double area, R;
    
    //Take radius as input from the user
    cin >> R;
    
    //Calculate the area of the circle and store the result in "area"
    area = (PI * R) * R;
    
    //Set the precision to 9 as required in the question
    cout << fixed << setprecision(9);
    
    //Display the area
    cout << area << endl;

    return 0;
}

int main()
{
    int t = 1;
    while (t--)
    {
        val();
    }
    return 0;
}
