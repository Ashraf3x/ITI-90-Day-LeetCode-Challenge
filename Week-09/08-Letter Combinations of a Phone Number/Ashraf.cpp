// Author: Ashraf
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
// Time Complexity: O((4 ^ N) * N)
// Space Complexity: O(N)
class Solution {
    string m[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void solve(int i, string& d, string& cur, vector<string>& ans) {
        if(i == d.size()) {
            ans.push_back(cur);
            return;
        }   
        for(char c : m[d[i] - '0']) {
            cur.push_back(c);
            solve(i + 1, d, cur, ans);
            cur.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> ans;
        string cur = "";
        solve(0, digits, cur, ans);
        return ans;
    }
};