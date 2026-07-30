// Author: Ashraf
// https://leetcode.com/problems/combination-sum/description/
// Time Complexity: O(2 ^ (t/n))
// Space Complexity: O(t/n)
class Solution {
    void solve(int i, int target, vector<int>& c, vector<int>& cur, vector<vector<int>>& ans) {
        if(target == 0) {
            ans.push_back(cur);
            return;
        }
        if(target < 0 || i == c.size()) {
            return;
        }
        cur.push_back(c[i]);
        solve(i, target - c[i], c, cur, ans);
        cur.pop_back();
        
        solve(i + 1, target, c, cur, ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> cur;
        solve(0, target, candidates, cur, ans);
        return ans;
    }
};