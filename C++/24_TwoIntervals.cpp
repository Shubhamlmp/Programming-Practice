#include <bits/stdc++.h>
using namespace std;

int solution()
{
    
    int l1, r1, l2, r2;
  
    //taking 4 integers as input
    cin >> l1 >> r1 >> l2 >> r2;  
  
    //we will only print -1 if there is no intersection between the two lines which is only possible if any of these two conditions are true
    if ((l2 > r1 && r2 > l1) || (l2 < l1 && r2 < l1))
    {
        cout << "-1";
    }
  
    //taking max of l1, l2 and min of r1, r2 as it is guaranteed that l1<=r1 and l2<=r2 and we have to print the intervals
    else
    {
        int l, r;
        l = max(l1, l2);
        r = min(r1, r2);
        cout << l << " " << r;
    }
  
    return 0;
}

int main()
{
    
    //calling the function
    solution();

    return 0;
}
