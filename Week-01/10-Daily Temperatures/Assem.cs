// Author: Assem
// Problem:  Clear Digits
// Link: https://leetcode.com/problems/clear-digits/description
// Time: O(n) | Space: O(n)

class Solution
{
public:
    string clearDigits(string s)
    {
        string result;

        for (char c : s)
        {
            if (isdigit(c))
            {
                if (!result.empty())
                    result.pop_back();
            }
            else
            {
                result.push_back(c);
            }
        }

        return result;
    }
};
