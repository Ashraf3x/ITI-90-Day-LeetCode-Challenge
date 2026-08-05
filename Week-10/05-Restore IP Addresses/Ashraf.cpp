// Author: Ashraf
// https://leetcode.com/problems/restore-ip-addresses/description/
// Time Complexity: O(1)
// Space Complexity: O(1)
class Solution {
public:
    vector<string> ans;
    void solve(int idx, int parts, string current, string& s) {
        if (parts == 4) {
            if (idx == s.size()) {
                current.pop_back();
                ans.push_back(current);
            }
            return;
        }
        for (int len = 1; len <= 3; len++) {
            if (idx + len > s.size()) break;
            string sub = s.substr(idx, len);
            if (sub.size() > 1 && sub[0] == '0') break;
            if (stoi(sub) > 255) break;
            solve(idx + len, parts + 1, current + sub + ".", s);
        }
    }
    vector<string> restoreIpAddresses(string s) {
        if (s.size() < 4 || s.size() > 12) return {};
        solve(0, 0, "", s);
        return ans;
    }
};