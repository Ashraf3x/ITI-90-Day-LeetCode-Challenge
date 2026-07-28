// Author: Ashraf
// https://leetcode.com/problems/subsets/description/
// Time Complexity: O(N * 2^N)
// Space Complexity: O(N)
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        solve(0, nums, temp, res);
        return res;
    }
    void solve(int i, vector<int>& nums, vector<int>& temp, vector<vector<int>>& res) {
        if(i == nums.size()) {
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(i + 1, nums, temp, res);
        temp.pop_back();
        solve(i + 1, nums, temp, res);
    }
};