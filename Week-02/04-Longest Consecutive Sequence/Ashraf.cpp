// Author: Ashraf
// Link: https://leetcode.com/problems/longest-consecutive-sequence/description/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for (auto it : nums)st.insert(it);
        int mx = 0;
        for (auto it :st) {
            if (!st.count(it - 1)) {
                int cur = it;
                int len = 1;
                while (st.count(cur + 1))
                    cur++, len++;
                mx = max(mx, len);
            }
        }
        return mx;
    }
};