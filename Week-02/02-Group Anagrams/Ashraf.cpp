// Author: Ashraf
// Link: https://leetcode.com/problems/group-anagrams/description/
// Time Complexity: O(n*m*log(m))
// Space Complexity: O(n*m)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res; 
        unordered_map<string,int> mp;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            if (mp.find(s) != mp.end()) {
                res[mp[s]].push_back(strs[i]);
            } else {
                mp[s] = res.size();
                res.push_back({strs[i]});
            }
        }
        return res;
    }
};

