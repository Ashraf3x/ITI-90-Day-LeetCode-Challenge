// Author: Ashraf
// https://leetcode.com/problems/partition-labels/description/
// Time Complexity: O(n)
// Space Complexity: O(26)
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int l[26];
        for (int i = 0; i < s.size(); i++)
            l[s[i] - 'a'] = i;
        vector<int> r;
        int m = 0, a = 0;
        for (int i = 0; i < s.size(); i++) {
            m = max(m, l[s[i] - 'a']);
            if (i == m) {
                r.push_back(i - a + 1);
                a = i + 1;
            }
        }
        return r;
    }
};