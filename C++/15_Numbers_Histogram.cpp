#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch; //input character
    int n;
    cin >> n;
    vector<int> v(n); 
    for (int i = 0; i < n; i++)
        cin >> v[i];   //input
    for (auto i : v)             
    {
        for (int j = 0; j < i; j++)
        {
            cout << ch; //printing the character Xi times
        }
        cout << endl;
    }
    return 0;
}