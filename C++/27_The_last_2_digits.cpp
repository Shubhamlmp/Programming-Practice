//Given a number N. Print numbers from 1 to N in separate lines.

#include <iostream> //iostream is a header file that contains basic input/output functions
using namespace std; //std is the standard namespace

int main() //main function
{
    int n; //declaring a variable n
    cin >> n; //taking input from user
    for (int i = 1; i <= n; i++) //for loop
    {
        cout << i << endl; //printing the numbers
    }
    return 0; //returning 0
    //end of program
}
