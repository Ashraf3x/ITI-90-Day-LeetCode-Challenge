// Author: Ashraf
// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, mx = 0;
        unordered_set<char> st;
        for (int r = 0; r < s.length(); r++) {
            while (st.find(s[r]) != st.end()) {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            mx = max(mx, r - l + 1);
        }
        return mx;
    }
};