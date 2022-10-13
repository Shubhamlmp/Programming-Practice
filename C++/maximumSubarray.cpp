
#include <limits.h>
#include <stdio.h>


int max(int a, int b) { return (a > b) ? a : b; }


int max(int a, int b, int c) { return max(max(a, b), c); }


int maxCrossingSum(int arr[], int l, int m, int h)
{
	
	int sum = 0;
	int left_sum = INT_MIN;
	for (int i = m; i >= l; i--) {
		sum = sum + arr[i];
		if (sum > left_sum)
			left_sum = sum;
	}

	
	sum = 0;
	int right_sum = INT_MIN;
	for (int i = m; i <= h; i++) {
		sum = sum + arr[i];
		if (sum > right_sum)
			right_sum = sum;
	}

	
	return max(left_sum + right_sum - arr[m], left_sum, right_sum);
}


int maxSubArraySum(int arr[], int l, int h)
{
	
	if (l > h)
		return INT_MIN;
	
	if (l == h)
		return arr[l];


	int m = (l + h) / 2;

	
	return max(maxSubArraySum(arr, l, m - 1),
			maxSubArraySum(arr, m + 1, h),
			maxCrossingSum(arr, l, m, h));
}


int main()
{
	int arr[] = { 2, 3, 4, 5, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int max_sum = maxSubArraySum(arr, 0, n - 1);
	printf("Maximum contiguous sum is %d\n", max_sum);
	getchar();
	return 0;
}
