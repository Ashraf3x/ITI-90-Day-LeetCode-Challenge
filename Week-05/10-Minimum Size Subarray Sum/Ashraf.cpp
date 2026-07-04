// Author: Ashraf
// Link: https://leetcode.com/problems/minimum-size-subarray-sum/description/
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0, sum = 0, mn = 1e9;
        while (r < nums.size()) {
            sum += nums[r];
            while (sum >= target) {
                mn = min(mn, r - l + 1);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        if (mn == 1e9) return 0;
        return mn;
    }
};