// Author: Eslam Mohamed Salem
// Link: https://leetcode.com/problems/backspace-string-compare/
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)
public class Solution
{
    public bool BackspaceCompare(string s, string t)
    {
        Stack<char> s1 = new Stack<char>();
        Stack<char> s2 = new Stack<char>();
        foreach (char c in s)
        {
            if (c == '#')
            {
                if (s1.Count != 0)
                    s1.Pop();
            }
            else
            {
                s1.Push(c);
            }
        }
        foreach (char c in t)
        {
            if (c == '#')
            {
                if (s2.Count != 0)
                    s2.Pop();
            }
            else
            {
                s2.Push(c);
            }
        }

        if (s1.Count == 0 && s2.Count == 0)
            return true;
        else if (s1.Count != s2.Count)
            return false;
        else
        {
            while (s1.Count != 0)
            {
                if (s1.Pop() != s2.Pop())
                    return false;
            }
        }
        return true;

    }
}