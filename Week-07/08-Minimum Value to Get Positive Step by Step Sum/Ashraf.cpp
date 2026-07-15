// Author: Ashraf
// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/description/
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0,mn = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            mn = min(mn, sum);
        }
        return 1 - mn;
    }
};