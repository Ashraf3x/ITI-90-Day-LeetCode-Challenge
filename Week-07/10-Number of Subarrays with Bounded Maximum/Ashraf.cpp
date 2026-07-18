// Author: Ashraf
// https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/description/
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
    int count(vector<int>& nums, int bound) {
        int ans = 0, c = 0;
        for (auto it : nums) {
            if (it <= bound) {
                c++;
                ans += c;
            } else {
                c = 0;
            }
        }
        return ans;
    }
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(nums, right) - count(nums, left - 1);
    }
};