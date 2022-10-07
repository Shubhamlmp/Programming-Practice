//Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

#include <iostream> //iostream is a header file that contains basic input/output functions
using namespace std; //std is the standard namespace

int main() //main function
{
    int n; //declaring a variable n
    cin >> n; //taking input from user
    for (int i = 2; i <= n; i += 2) //for loop
    {
        cout << i << endl; //printing the numbers
    }
    return 0; //returning 0
    //end of program
}
