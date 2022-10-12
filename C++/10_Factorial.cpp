#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0) //base case
    return 1;
    else
    return n*factorial(n-1); //recursion statement
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
