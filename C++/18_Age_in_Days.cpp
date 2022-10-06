#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int YEAR = 365;
    const int MONTH = 30;

    int DAYS;
    cin >> DAYS;

    const int years = DAYS / YEAR;
    cout << years << " years" << endl;

    int left_days = DAYS % YEAR;
    const int months = left_days / MONTH;
    cout << months << " months" << endl;

    left_days = left_days % MONTH;
    cout << left_days << " days" << endl;

    return 0;
}
