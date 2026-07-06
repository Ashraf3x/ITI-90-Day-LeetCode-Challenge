// Author: Ashraf
// Link: https://leetcode.com/problems/jump-game/
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int r = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > r) return false;
            r = max(r, i + nums[i]);
            if (r >= nums.size() - 1) return true;
        }
        return false;
    }
};