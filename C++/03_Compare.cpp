#include <iostream>
#include <cmath>
using namespace std;

bool check_prime(int);

int main() {
    string a;
    string b;
    cin >> a >> b;
    if(a < b)
        cout << a;
    else
        cout << b;
}

