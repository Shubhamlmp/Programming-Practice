//Given a number N, and N numbers, find maximum number in these N numbers.

#include <iostream> //iostream is a header file that contains basic input/output functions
using namespace std; //std is the standard namespace

int main() //main function
{
    int n; //declaring a variable n
    cin >> n; //taking input from user
    int max = -1000000000; //declaring a variable max and assigning it a value of -1000000000
    for (int i = 0; i < n; i++) //for loop
    {
        int x; //declaring a variable x
        cin >> x; //taking input from user
        if (x > max) //if x is greater than max
        {
            max = x; //assigning x to max
        }
    }
    cout << max << endl; //printing max
    return 0; //returning 0
    //end of program
}