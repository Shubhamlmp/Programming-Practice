//Given a number X. Determine if the number is prime or not.

#include <iostream>    //iostream is a header file which contains basic input/output functions.
#include <cmath>       //cmath is a header file which contains mathematical functions.
using namespace std;   //Using standard namespace.

int main()            
{
    int x;          //Declaring variable x as integer.
    cin >> x;       //Taking input of x.
    int i = 2;      //Declaring variable i as integer and initializing it to 2.
    while (i <= sqrt(x))    //Looping from 2 to square root of x.
    {
        if (x % i == 0)     //Checking if x is divisible by i.
        {
            cout << "Not Prime" << endl;    //Printing Not Prime.
            return 0;                       //Return 0 to indicate that the program ended successfully.
        }
        i++;                              //Incrementing i by 1.
    }
    cout << "Prime" << endl;    //Printing Prime.
    return 0;                   //Return 0 to indicate that the program ended successfully.
    //End of program

 }
