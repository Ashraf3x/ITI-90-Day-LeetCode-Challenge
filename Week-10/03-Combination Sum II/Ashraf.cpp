// Author: Ashraf
// https://leetcode.com/problems/combination-sum-ii/description/
// Time Complexity: O(2^N)
// Space Complexity: O(N)
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void solve(int idx, int target, vector<int>& candidates) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            if (i > idx && candidates[i] == candidates[i - 1]) continue;
            if (candidates[i] > target) break;
            temp.push_back(candidates[i]);
            solve(i + 1, target - candidates[i], candidates);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        solve(0, target, candidates);
        return ans;
    }
};