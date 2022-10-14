#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, q;
    cin >> n >> q;  //input from user
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end()); //sorting the vector to apply binary search
    while (q--)  
    {
        int target;
        cin >> target;
        bool check = false;
        int start = 0, end = n - 1;
        while (start <= end)  //running Binary Search for each query
        {
            int mid = start + (end - start) / 2;
            if (v[mid] == target)
            {
                  check = true;
                  break;
            }
            else if (v[mid] < target)
            {
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        if (check)   //condition
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}
