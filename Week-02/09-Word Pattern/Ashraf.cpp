// Author: Ashraf
// Link: https://leetcode.com/problems/word-pattern/description/
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        vector<string> v;
        while (ss >> word) {
            v.push_back(word);
        }
        if (pattern.size() != v.size())
        return false;
        unordered_map<char, string> ctw;
        unordered_map<string, char> wtc;
        for (int i = 0; i < pattern.size(); i++) {
            char a = pattern[i];
            string b = v[i];
            if ((ctw.count(a) && ctw[a] != b) || (wtc.count(b) && wtc[b] != a))
            return false;
            ctw[a] = b, wtc[b] = a;
        }
        return true;
    }
};