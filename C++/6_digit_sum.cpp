//Given 2 numbers N and M. Print thesum of lastdigit of both the numbers.

#include <iostream>                    //iostream is a header file which contains basic input/output functions.
using namespace std;
int main() {
    long long int N, M;                 //Declaring variables N and M as double.
    int sum;
    cin >> N >> M;                      //Taking input of N and M.
    sum = N%10 + M%10;                  //Taking the sum of last digit(i.e. remainder of division by 10)
    cout<<sum<<endl; 
    return 0;                           //Return 0 to indicate that the program ended successfully.
    //End of program
}
 