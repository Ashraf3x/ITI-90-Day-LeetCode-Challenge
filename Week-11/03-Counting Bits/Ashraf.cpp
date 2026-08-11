// Author: Ashraf
// https://leetcode.com/problems/counting-bits/description/
// Time Complexity: O(N)
// Space Complexity: O(N)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for(int i = 1; i <= n; i++) {
            ans[i] = ans[i / 2] + (i % 2);
        }
        return ans;
    }
};