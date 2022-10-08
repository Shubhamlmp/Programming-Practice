#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // number of element in the array

    int a[n];

    for (int i = 0; i < n; i++)
    { // taking all the elements as input
        cin >> a[i];
    }

    for (int i = 0; i < n / 2; i++)
    { // for odd n, we will skip checking for middle element as it won't affect
        if (a[i] != a[n - i - 1])
        {                   // checking ith element from staring and ith element from the end
            cout << "NO\n"; // if not equal then print NO and stop the funtion
            return 0;
        }
    }
    cout << "YES\n"; // If funciton didn't stop then it is a palindrome
    return 0;
}
