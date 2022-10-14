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

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 10)
        {                                                // checking if element is less than or equal to 10 or not
            cout << "A[" << i << "] = " << a[i] << "\n"; // if true then printing the index and element
        }
    }

    return 0;
}
