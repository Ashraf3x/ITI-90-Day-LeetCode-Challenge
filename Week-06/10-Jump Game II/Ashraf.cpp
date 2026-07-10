// Author: Ashraf
// https://leetcode.com/problems/jump-game-ii/description/
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0, cur = 0, mx = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            if (i + nums[i] > mx) {
                mx = i + nums[i];
            }
            if (i == cur) {
                ans++;
                cur = mx;
            }
        }
        return ans;
    }
};