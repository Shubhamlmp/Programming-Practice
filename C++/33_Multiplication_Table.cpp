//Given a number N. Print the maltiplication table of the number from 1 to 12.

#include <iostream>                    //iostream is a header file which contains basic input/output functions.
#include <iomanip>                     //iomanip is a header file which contains functions for input/output manipulations.
#include <cmath>                       //cmath is a header file which contains mathematical functions.
using namespace std;

int main() {
    int n;                               //Declaring variable n as integer.
    cin>>n;                              //Taking input of n.
    for(int i = 1; i <= 12; i++)         //Looping from 1 to 12.
        cout << i << " x " << n << " = " << i * n << endl; //Printing i x n = i * n.
    return 0;                           //Return 0 to indicate that the program ended successfully.
    //End of program
}