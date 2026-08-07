// Author: Ashraf
// https://leetcode.com/problems/permutations-ii/description/
// Time Complexity: O(N*!N)
// Space Complexity: O(N)
class Solution {
    vector<vector<int>> ans;
    vector<int> cur;
    vector<bool> vis;
    void solve(vector<int>& nums) {
        if (cur.size() == nums.size()) {
            ans.push_back(cur);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (vis[i]) continue;
            if (i > 0 && nums[i] == nums[i - 1] && !vis[i - 1]) continue;
            vis[i] = true;
            cur.push_back(nums[i]);
            solve(nums);
            cur.pop_back();
            vis[i] = false;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vis.resize(nums.size(), false);
        solve(nums);
        return ans;
    }
};