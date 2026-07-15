// Author: Ashraf
// https://leetcode.com/problems/matrix-block-sum/description/
// Time Complexity: O(n*m)
// Space Complexity: O(n*m)
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> p(m + 1, vector<int>(n + 1, 0)), r(m, vector<int>(n));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] + mat[i - 1][j - 1];
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int r1 = max(0, i - k), c1 = max(0, j - k);
                int r2 = min(m, i + k + 1), c2 = min(n, j + k + 1);
                r[i][j] = p[r2][c2] - p[r1][c2] - p[r2][c1] + p[r1][c1];
            }
        }
        return r;
    }
};