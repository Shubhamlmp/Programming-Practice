/*
 
 Given an array arr[] of size N, the task is to find the maximum sum non-empty subsequence present in the given array.

*/


#include <bits/stdc++.h>
using namespace std;

// Function to print the maximum non-empty subsequence sum

int mex_subsequence(int a[], int n)
{
	int sum = 0;
	int max = *max_element(a, a + n);
    // Stores the largest element
	if (max <= 0) {

		return max;
	}
    // Traverse the array
	for (int i = 0; i < n; i++) {
        // If a[i] is greater than 0
		if (a[i] > 0) {
            // Update sum
			sum += a[i];
		}
	}
	return sum;
}

int main()
{
	int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
	cout << mex_subsequence(arr, N);

	return 0;
}
