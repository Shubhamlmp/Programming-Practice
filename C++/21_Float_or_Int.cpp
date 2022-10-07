#include <iostream>
#include <cmath>

using namespace std;

bool isInteger(double N)
{
	int X = N;

	double temp2 = N - X;
	if (temp2 > 0)
	{
		return false;
	}
	return true;
}

int main()
{
	double number;

	cin >> number;
	if (isInteger(number))
		cout << "int " << (int)number << endl;
	else
	{
		double integerPart;
		double decimalPart = std::modf(number, &integerPart);
		cout << "float " << integerPart << " " << decimalPart << endl;
	}

	return 0;
}