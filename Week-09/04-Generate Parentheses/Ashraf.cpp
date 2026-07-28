// Author: Ashraf
// https://leetcode.com/problems/generate-parentheses/description/
// Time Complexity: O(2 ^ (2*N))
// Space Complexity: O(N)
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(0, 0, n, "", res);
        return res;
    }
    void solve(int o, int c, int n, string cur, vector<string>& res) {
        if(cur.length() == 2 * n) {
            res.push_back(cur);
            return;
        }
        if(o < n) {
            solve(o + 1, c, n, cur + '(', res);
        }
        if(c < o) {
            solve(o, c + 1, n, cur + ')', res);
        }
    }
};