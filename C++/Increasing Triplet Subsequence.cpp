/* Leetcode problem #334 :  Increasing Triplet Subsequence <br>
Code Link : https://leetcode.com/problems/increasing-triplet-subsequence/
*/

class Solution {
    public boolean increasingTriplet(int[] nums) {
           if (nums == null || nums.length < 3) {
        return false;
    }
        
    int minOne = Integer.MAX_VALUE;
    int minTwo = Integer.MAX_VALUE;
        
    for (int num : nums) {
        if (num < minOne) {
            minOne = num;
        }
            
        if (num > minOne) {
            minTwo = Math.min(num, minTwo);
        }
          
        if (num > minTwo) {
            return true;
        }
    }
    return false;
    }
}
