// Author: Ashraf
// Link: https://leetcode.com/problems/minimum-window-substring/description/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> m;
        for (char c : t)
            m[c]++;
        int l = 0, r = 0, cnt = t.size();
        int mn = 1e9, st = 0;
        while (r < s.size()) {
            if (m[s[r]] > 0)
                cnt--;
            m[s[r]]--;
            r++;
            while (cnt == 0) {
                if (r - l < mn) {
                    mn = r - l;
                    st = l;
                }
                m[s[l]]++;
                if (m[s[l]] > 0)
                    cnt++;
                l++;
            }
        }
        if (mn == 1e9)
            return "";
        return s.substr(st, mn);
    }
};