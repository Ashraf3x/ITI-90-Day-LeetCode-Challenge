// Author: Ashraf
// https://leetcode.com/problems/n-queens/description/
// Time Complexity: O(N!)
// Space Complexity: O(N)
class Solution {
public:
    vector<vector<string>> ans;
    vector<string> a;
    bool isSafe(int r, int c, int n) {
        for (int i = 0; i < r; i++) {
            if (a[i][c] == 'Q') return false;
        }
        for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
            if (a[i][j] == 'Q') return false;
        }
        for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++) {
            if (a[i][j] == 'Q') return false;
        }
        return true;
    }
    void solve(int r, int n) {
        if (r == n) {
            ans.push_back(a);
            return;
        }
        for (int c = 0; c < n; c++) {
            if (isSafe(r, c, n)) {
                a[r][c] = 'Q';
                solve(r + 1, n);
                a[r][c] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        ans.clear();
        a = vector<string>(n, string(n, '.'));
        solve(0, n);
        return ans;
    }
};