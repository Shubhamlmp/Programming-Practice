#include <iostream>
using namespace std;

int main() {

    cout<<"Enter a number: ";    // taking input

    int n,sum;

    cin>>n;

    while(n) {
        sum += n%10;
        n /= 10;
    }  // calculating sum

    cout<<"Sum of digits = "<<sum;   // giving output
}
