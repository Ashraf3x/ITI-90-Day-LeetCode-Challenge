// Author: Ashraf
// https://leetcode.com/problems/subsets-ii/description/
// Time Complexity: O(N * (2^N))
// Space Complexity: O(N)
class Solution {
    vector<vector<int>> res;
    vector<int> cur;
    void rec(int idx, vector<int>& a) {
        res.push_back(cur);
        for(int i = idx; i < a.size(); i++) {
            if(i > idx && a[i] == a[i-1])continue;
            cur.push_back(a[i]);
            rec(i + 1, a);
            cur.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        rec(0, nums);
        return res;
    }
};