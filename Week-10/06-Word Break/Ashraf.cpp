// Author: Ashraf
// https://leetcode.com/problems/word-break/description/
// Time Complexity: O(N*M*L)
// Space Complexity: O(N)
class Solution {
public:
    int dp[305];
    bool solve(int idx, string& s, vector<string>& wordDict) {
        if (idx == s.size()) return true;
        if (dp[idx] != -1) return dp[idx];
        for (int i = 0; i < wordDict.size(); i++) {
            string w = wordDict[i];
            if (idx + w.size() <= s.size() && s.substr(idx, w.size()) == w) {
                if (solve(idx + w.size(), s, wordDict)) {
                    return dp[idx] = 1;
                }
            }
        }
        return dp[idx] = 0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        for (int i = 0; i < 305; i++) dp[i] = -1;
        return solve(0, s, wordDict);
    }
};