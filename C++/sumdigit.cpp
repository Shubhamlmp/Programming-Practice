#include <iostream>
using namespace std;

int main() {
    int n, x, sum = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        sum += x % 10;
        x /= 10;
    }
    cout << sum << endl;
}