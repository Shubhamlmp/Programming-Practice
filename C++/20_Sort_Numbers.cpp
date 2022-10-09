#include <iostream>

using namespace std;

void sortNumbers(int &, int &, int &);

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	sortNumbers(a, b, c);

	cout << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}

void sortNumbers(int &a, int &b, int &c)
{
	int min = a;
	int mid = b;
	int max = c;

	if (min > mid)
	{
		mid = a;
		min = b;
	}
	if (mid > max)
	{
		max = mid;
		mid = c;
		if (min > mid)
		{
			mid = min;
			min = c;
		}
	}

	cout << min << endl;
	cout << mid << endl;
	cout << max << endl;
}
