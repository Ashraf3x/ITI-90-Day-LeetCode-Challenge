// Author: Ashraf
// https://leetcode.com/problems/permutations/description/
// Time Complexity: O(N * !N)
// Space Complexity: O(N)
class Solution {
    vector<vector<int>> res;
    void rec(int idx, vector<int>& a) {
        if(idx == a.size()) {
            res.push_back(a);
            return;
        }
        for(int i = idx; i < a.size(); i++) {
            swap(a[idx], a[i]);
            rec(idx + 1, a);
            swap(a[idx], a[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        rec(0, nums);
        return res;
    }
};	