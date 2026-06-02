// Author: Assem
// Problem: Valid Parentheses
// Link: https://leetcode.com/problems/valid-parentheses/description/
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack = {};

        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] == ')' || s[i] == '}' || s[i] == ']') && stack.empty())
            {
                return false;
            }
            else
            {
                if (stack.empty() || s[i] == '(' || s[i] == '{' || s[i] == '[')
                {
                    stack.push(s[i]);
                }
                else if (stack.top() == '(' && s[i] == ')')
                {
                    stack.pop();
                }
                else if (stack.top() == '{' && s[i] == '}')
                {
                    stack.pop();
                }
                else if (stack.top() == '[' && s[i] == ']')
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        if (stack.empty())
        {
            return true;
        }

        return false;
    }
};

int main()
{

    Solution s;

    s.isValid("(])");

    return 0;
}
