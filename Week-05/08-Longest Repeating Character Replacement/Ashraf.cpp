// Author: Ashraf
// Link: https://leetcode.com/problems/longest-repeating-character-replacement/
// Time Complexity: O(n*26)
// Space Complexity: O(26)
class Solution {
public:
    int characterReplacement(string s, int k) {
        int c[26] = {0};
        int l = 0, r = 0, mx = 0, ans = 0;
        while (r < s.size()) {
            c[s[r] - 'A']++;
            mx = max(mx, c[s[r] - 'A']);
            while (r - l + 1 - mx > k) {
                c[s[l] - 'A']--;
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};