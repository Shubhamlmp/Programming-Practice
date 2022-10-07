#include <iostream>  // Including Iostream for Basic I/O Operations
#include <cmath>     // Including Cmath for Mathematical Operations
using namespace std;

int main(){
    double h,p,b;    // Declairing h,p,b variables for hypotenuse, base and perpendicular

    // Taking the input for perpendicular
    cout<<"Enter Perpendicular Length: "; 
    cin>>p;

    // Taking the input for perpendicular
    cout<<"Enter Base Length: ";
    cin>>b;

    /* Calculating Hypotenuse using Pythagorean theorem*/ 
    h = sqrt(pow(p,2)+pow(b,2));

    // Printing the output using cout
    cout<< "The Hypotenuse is: "<<h;
    return 0;
}