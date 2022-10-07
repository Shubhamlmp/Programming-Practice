#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;                               // input length of array
    int max_no = INT_MIN, min_no = INT_MAX; // intialize maximum and minimum number
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // input array
    }

    for (auto i : arr)
    {
        if (i > max_no)
        { // condition to find the maximum number
            max_no = i;
        }
        if (i < min_no)
        { // condition to find the minimum number
            min_no = i;
        }
    }
    cout << min_no << " ";
    cout << max_no << endl;
    return 0;
}