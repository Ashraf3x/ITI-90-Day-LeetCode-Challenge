// Author: Ashraf
// Link: https://leetcode.com/problems/backspace-string-compare/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string temp1 = "", temp2 = "";
        for (auto it : s) {
            if (it == '#' && !temp1.empty())
                temp1.pop_back();
            else
                temp1 += it;
        }
        for (auto it : t) {
            if (it == '#' && !temp2.empty())
                temp2.pop_back();
            else
                temp2 += it;
        }
        while(*temp1.begin()=='#')temp1.erase(temp1.begin());
        while(*temp2.begin()=='#')temp2.erase(temp2.begin());
        return temp1 == temp2;
    }
};