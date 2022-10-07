#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= target)
            {
                j = i;
                break;
            }
            else
            {
                j = nums.size();
            }
        }

        return j;
    }
};