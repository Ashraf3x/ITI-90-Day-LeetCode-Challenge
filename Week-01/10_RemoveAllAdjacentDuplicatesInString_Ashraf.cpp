// Author: Ashraf
// Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (temp.empty() || s[i] != temp.back()) {
                temp.push_back(s[i]);
            } 
	        else {
                temp.pop_back();
            }
        }

        return temp;
    }
};