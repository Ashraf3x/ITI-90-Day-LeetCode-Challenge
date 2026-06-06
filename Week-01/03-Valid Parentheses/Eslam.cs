// Author: Eslam Mohmaed Salem
// Link: https://leetcode.com/problems/valid-parentheses
// Time Complexity: O(n)
// Space Complexity: O(n)
public class Solution
{
    public bool IsValid(string s)
    {
        var stack = new Stack<char>();
        foreach (char c in s)
        {
            if (c == ')')
            {
                if (stack.Count > 0)
                    if (stack.Peek() == '(' && stack.Count > 0)
                        stack.Pop();
                    else
                        return false;
                else
                    return false;
            }
            else if (c == '}')
            {
                if (stack.Count > 0)
                    if (stack.Peek() == '{')
                        stack.Pop();
                    else
                        return false;
                else
                    return false;
            }
            else if (c == ']')
            {
                if (stack.Count > 0)
                    if (stack.Peek() == '[')
                        stack.Pop();
                    else
                        return false;
                else
                    return false;
            }
            else
                stack.Push(c);
        }

        if (stack.Count > 0)
            return false;
        return true;

    }
}