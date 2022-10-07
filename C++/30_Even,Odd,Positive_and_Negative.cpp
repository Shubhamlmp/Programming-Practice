//Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

#include <iostream> //iostream is a header file that contains basic input/output functions
using namespace std; //std is the standard namespace

int main() //main function
{
    int x; //declaring a variable x
    while (cin >> x) //while loop
    {
        if (x == 2002) //if x is 2002
        {
            cout << "Correct" << endl; //printing "Correct"
            break; //breaking the loop
        }
        else //if x is not 2002
        {
            cout << "Wrong" << endl; //printing "Wrong"
        }
    }
    return 0; //returning 0
    //end of program
}