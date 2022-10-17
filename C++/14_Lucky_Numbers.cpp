#include <bits/stdc++.h>
using namespace std;

bool isValid(int i)
{
    bool check = true;
    while (i > 0)
    {
        int rem = i % 10;
        if (rem != 4 || rem != 7) //conditions to check for validity
            check = false;
        i = i / 10;
    }
    return check;
}

int main()
{
    int a, b;
    cin >> a >> b;   //input from user
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (isValid(i))      //checking validity for each number in range a to b
        {
            cnt++;
            cout << i << " ";
        }
    }
    if (cnt == 0)  //if no number is valid then print -1
        cout << -1 << endl;
    return 0;
}