// fibonnaci series
#include <iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main() {
    int n=4;
    cout<<fib(n);
    return 0;
}