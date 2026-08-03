// Author: Ashraf
// https://leetcode.com/problems/word-search/description/
// Time Complexity: O(N*M*3^S)
// Space Complexity: O(S)
class Solution {
public:
    int m, n;
    bool dfs(vector<vector<char>>& board, string& word, int r, int c, int k) {
        if (k == word.length()) return true;
        if (r < 0 || r >= m || c < 0 || c >= n || board[r][c] != word[k]) {
            return false;
        }
        char temp = board[r][c];
        board[r][c] = '#';
        bool found = dfs(board, word, r + 1, c, k + 1) ||
                     dfs(board, word, r - 1, c, k + 1) ||
                     dfs(board, word, r, c + 1, k + 1) ||
                     dfs(board, word, r, c - 1, k + 1);
        board[r][c] = temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};