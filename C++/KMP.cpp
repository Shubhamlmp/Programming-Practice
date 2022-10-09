#include <bits/stdc++.h>
using namespace std;

// Unstable
// O(n2)
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 4, 1, 32, 42, 2, 4, 1, 1, 313, 13};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);

    return 0;
}
