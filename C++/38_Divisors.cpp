//Given a number N. Print all the divisors of N in ascending order.

#include <iostream>                    //iostream is a header file which contains basic input/output functions.
#include <iomanip>                     //iomanip is a header file which contains functions for input/output manipulations.
#include <cmath>                       //cmath is a header file which contains mathematical functions.
using namespace std;

int main() {
    int n;                               //Declaring variable n as integer.
    cin>>n;                              //Taking input of n.
    for(int i = 1; i <= n; i++)          //Looping from 1 to n.
        if(n % i == 0)                   //Checking if n is divisible by i.
            cout<<i<<" ";                //Printing i.
    return 0;                            //Return 0 to indicate that the program ended successfully.
    //End of program
}
