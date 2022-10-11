//Given a number N. Print the factorial of number N.

#include <iostream>                    //iostream is a header file which contains basic input/output functions.
#include <iomanip>                     //iomanip is a header file which contains functions for input/output manipulations.
#include <cmath>                       //cmath is a header file which contains mathematical functions.
int main() {
    int t;                              //Declaring variable t as integer.
    cin >> t;                           //Taking input of t.
    while(t--) {                        //Looping t times.
        int n;                          //Declaring variable n as integer.
        cin >> n;                       //Taking input of n.
        long long int fact = 1;         //Declaring variable fact as long long int and initializing it with 1.
        for(int i = 2; i <= n; i++)     //Looping from 2 to n.
            fact *= i;                  //Multiplying fact with i.
        cout << fact << endl;           //Printing fact.
    }
    return 0;                           //Return 0 to indicate that the program ended successfully.
    //End of program
}