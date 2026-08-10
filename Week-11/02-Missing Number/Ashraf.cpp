// Author: Ashraf
// https://leetcode.com/problems/missing-number/description/
// Time Complexity: O(N)
// Space Complexity: O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            res ^= i ^ nums[i];
        }
        return res;
    }
};