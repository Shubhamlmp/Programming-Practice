//Given N numbers. Count how many of these values are even, odd, positive and negative.

#include <iostream> //iostream is a header file that contains basic input/output functions
using namespace std; //std is the standard namespace

int main() //main function
{
    int n; //declaring a variable n
    cin >> n; //taking input from user
    int even = 0, odd = 0, positive = 0, negative = 0; //declaring variables
    for (int i = 1; i <= n; i++) //for loop
    {
        int x; //declaring a variable x
        cin >> x; //taking input from user
        if (x % 2 == 0) //if x is even
        {
            even++; //incrementing even
        }
        else //if x is odd
        {
            odd++; //incrementing odd
        }
        if (x > 0) //if x is positive
        {
            positive++; //incrementing positive
        }
        else if (x < 0) //if x is negative
        {
            negative++; //incrementing negative
        }
    }
    cout << even << " " << odd << " " << positive << " " << negative << endl; //printing the numbers
    return 0; //returning 0
    //end of program
}