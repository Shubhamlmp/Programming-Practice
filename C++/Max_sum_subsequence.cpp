#include <bits/stdc++.h>
using namespace std;

int MaxNonEmpSubSeq(int a[], int n)
{
	int sum = 0;
	int max = *max_element(a, a + n);

	if (max <= 0) {

		return max;
	}

	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
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
	cout << MaxNonEmpSubSeq(arr, N);

	return 0;
}
