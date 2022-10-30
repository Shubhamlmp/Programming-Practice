#include <iostream>
using namespace std;

int main()
{

    char mychar;

    do
    {

        cout << "Iam A Programmer"<< "Enter x  character to print the message again: ";
        cin>>mychar;

    }

    while (mychar == 'x') ;
    
    return 0;
}