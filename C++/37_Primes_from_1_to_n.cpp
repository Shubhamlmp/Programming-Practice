//Given a number N. Print all prime numbers between 1 and N inclusive.

#include <iostream>                    //iostream is a header file which contains basic input/output functions.
#include <iomanip>                     //iomanip is a header file which contains functions for input/output manipulations.
#include <cmath>                       //cmath is a header file which contains mathematical functions.
using namespace std;

int main() {
    int n;                               //Declaring variable n as integer.
    cin>>n;                              //Taking input of n.
    for(int i = 2; i <= n; i++)          //Looping from 2 to n.
    {
        int j = 2;                       //Declaring variable j as integer and initializing it to 2.
        while(j <= sqrt(i))              //Looping from 2 to square root of i.
        {
            if(i % j == 0)               //Checking if i is divisible by j.
                break;                   //Break the loop if i is divisible by j.
            j++;                         //Incrementing j by 1.
        }
        if(j > sqrt(i))                  //Checking if j is greater than square root of i.
            cout<<i<<" ";                //Printing i.
    }
    return 0;                            //Return 0 to indicate that the program ended successfully.
    //End of program
}