// Author: Ashraf
// https://leetcode.com/problems/climbing-stairs/description/
// Time Complexity: O(N)
// Space Complexity: O(N)
class Solution {
    int solve(int n, vector<int>& dp) {
        if(n <= 2) return n;
        if(dp[n] != -1) return dp[n];
        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};