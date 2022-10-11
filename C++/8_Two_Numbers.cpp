//Given 2 numbers A and B. Print floor, ceil and round of A/B.

#include <iostream>                    //iostream is a header file which contains basic input/output functions.
#include <iomanip>                     //iomanip is a header file which contains functions for input/output manipulations.
#include <cmath>                       //cmath is a header file which contains mathematical functions.
int main() {
    double a, b;                        //Declaring variables a and b as double.
    cin >> a >> b;                      //Taking input of a and b.
    cout << floor(a/b) << endl;         //Printing floor of a/b.
    cout << ceil(a/b) << endl;          //Printing ceil of a/b.
    cout << round(a/b) << endl;         //Printing round of a/b.
    return 0;                           //Return 0 to indicate that the program ended successfully.
    //End of program
}
 