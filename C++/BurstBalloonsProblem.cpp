/*
Problem Statement :
You are given n balloons, indexed from 0 to n - 1. Each balloon is painted with a number on it represented by an array nums. You are asked to burst all the balloons.
If you burst the ith balloon, you will get nums[i - 1] * nums[i] * nums[i + 1] coins. If (i - 1) or (i + 1) goes out of bounds of the array, then treat it as if there is a balloon with a 1 painted on it.
Return the maximum coins you can collect by bursting the balloons wisely.

Constraints:
n == nums.length
1 <= n <= 300
0 <= nums[i] <= 100

Example 1:
Input: nums = [3,1,5,8]
Output: 167
Explanation:
nums = [3,1,5,8] --> [3,5,8] --> [3,8] --> [8] --> []
coins =  3*1*5    +   3*5*8   +  1*3*8  + 1*8*1 = 167

Example 2:
Input: nums = [1,5]
Output: 10
*/
#include <bits/stdc++.h>
using namespace std;

/* Code insise class Solution */
class Solution {
public:
    int dp[505][505];
    vector<int> nums;
    int calc(int l,int r)
    {
        //base cases
        if(l>r) return 0;
        if(dp[l][r]!=-1) return dp[l][r];
        //recurrence
        int ans = 0;
        for(int i=l;i<=r;i++)
        {
            int curr = calc(l,i-1)+calc(i+1,r)+ nums[l-1]*nums[i]*nums[r+1];
            ans = max(ans,curr);
        }
        return dp[l][r] = ans;
    }
    int maxCoins(vector<int>& arr) {
        int n = arr.size();
        arr.insert(arr.begin(),1);
        arr.insert(arr.end(),1);
        nums = arr;
        memset(dp,-1,sizeof(dp));
        //now size = n+2
        return calc(1,n);
    }
};

int main() {
    vector<int> arr{3,1,5,8};
    Solution s;
    cout<<s.maxCoins(arr);
    return 0;  
}
