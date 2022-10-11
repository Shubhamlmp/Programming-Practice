#include <iostream>
using namespace std;
int main(){
    int a, b, c, sum;
    
    // Asking for input
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    
    // Calculating sum
    sum = a + b + c;
    
    // Displaying output
    cout << "Sum of three numbers: " << sum << endl;
    return 0;
}