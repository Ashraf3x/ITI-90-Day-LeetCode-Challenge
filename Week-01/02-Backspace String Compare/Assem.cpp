// Author: Assem
// Problem: Backspace String Compare
// Link: https://leetcode.com/problems/backspace-string-compare/description/
// Time: O() | Space: O()

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        vector<char> s1 = {};
        vector<char> s2 = {};

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '#' && s1.empty())
            {
                continue;
            }
            else if (s[i] == '#')
            {
                s1.pop_back();
            }
            else
            {
                s1.push_back(s[i]);
            }
        }
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == '#' && s2.empty())
            {
                continue;
            }
            else if (t[i] == '#')
            {
                s2.pop_back();
            }
            else
            {
                s2.push_back(t[i]);
            }
        }

        // return value
        if (s1 == s2)
        {
            // cout << "true" << endl;
            return true;
        }

        // cout << "false" << endl;
        return false;
    }
};

int main()
{

    Solution s;

    s.backspaceCompare("a##c", "#a#c");

    return 0;
}
