#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking no of test cases input
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        string str1, str2;
        cin >> str1 >> str2; // taking inputs from user
        int size1 = str1.size();
        int size2 = str2.size();
        int i = 0;        // pointer pointing to zeroth index
        string str3 = ""; // empty new string

        // first we iterate in each string upto the size of the minimum of the two strings
        for (; i < min(size1, size2); i++) //
        {
            str3 += str1[i]; // concating from string1
            str3 += str2[i]; // concating from string2
        }
        if (size1 == size2)
            cout << str3 << endl;

        else
        {
            //if the pointer reaches the size of string 1 i.e string 1 is iterated
            //so we concatenate the remaining of string2 in the new string
            if (i == size1)    
            {
                for (; i < size2; i++)
                {
                    str3 += str2[i];
                }
            }
            //if the pointer reaches the size of string 2 i.e string 2 is iterated
            //so we concatenate the remaining of string1 in the new string
            else
            {
                for (; i < size1; i++)
                {
                    str3 += str1[i];
                }
            }
            cout << str3 << endl;
        }
    }
}