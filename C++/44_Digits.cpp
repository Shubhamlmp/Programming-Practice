#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // taking the input
        long long int tmp;
        cin >> tmp;
        if (tmp == 0)
        {
            cout << "0" << endl;
            return 0;
        }
        // now inorder to print the number in reverse order we find it's last digit
        // ! last digit of a number (n) = n%10
        // ! now that we print it we need to second last digit, so we divide n by 10 and print n%10 in the next turn again
        // Eg. - n = 1234
        //  n%10   n
        //   4     123
        //   3     12
        //   2     1
        //   1     0
        // now that n is 0 stop the loop
        while (tmp > 0)
        {
            cout << tmp % 10 << " ";
            tmp = tmp / 10;
        }
        cout << endl;
    }

    return 0;
}