/**
Given a number N. Print 2 lines that contain the following respectively:

1. Print N in a reversed order and not leading zeroes.
2. If N is a palindrome number print "YES" otherwise, print "NO.

**/

#include <iostream>                    //iostream is a header file which contains basic input/output functions.
#include <iomanip>                     //iomanip is a header file which contains functions for input/output manipulations.
#include <cmath>                       //cmath is a header file which contains mathematical functions.
using namespace std;

int main() {
    int n, reversed = 0, remainder, original; //Declaring variables n, reversed, remainder and original as integer.
    cin>>n;                                  //Taking input of n.
    original = n;                            //Storing n in original.
    while(n != 0)                            //Looping until n is not equal to 0.
    {
        remainder = n % 10;                  //Storing remainder of n divided by 10 in remainder.
        reversed = reversed * 10 + remainder; //Storing reversed * 10 + remainder in reversed.
        n /= 10;                             //Dividing n by 10 and storing the result in n.
    }
    cout<<reversed<<endl;                    //Printing reversed.
    if(original == reversed)                 //Checking if original is equal to reversed.
        cout<<"YES";                         //Printing YES.
    else                                     //Else
        cout<<"NO";                          //Printing NO.
    return 0;                                //Return 0 to indicate that the program ended successfully.
    //End of program
}

