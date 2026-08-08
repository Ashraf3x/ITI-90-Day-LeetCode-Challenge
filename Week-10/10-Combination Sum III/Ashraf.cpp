// Author: Ashraf
// https://leetcode.com/problems/combination-sum-iii/description/
// Time Complexity: O(N * (N^9))
// Space Complexity: O(N)
class Solution {
    vector<vector<int>> r;
    vector<int> c;
    void f(int k, int n, int s) {
        if (!k && !n) {
            r.push_back(c);
            return;
        }
        if (!k || n < 0)
            return;
        for (int i = s; i < 10; ++i) {
            c.push_back(i);
            f(k - 1, n - i, i + 1);
            c.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        f(k, n, 1);
        return r;
    }
};