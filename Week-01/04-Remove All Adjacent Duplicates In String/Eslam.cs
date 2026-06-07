// Author: Eslam Mohmaed Salem
// Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string
// Time Complexity: O(n)
// Space Complexity: O(n)
public class Solution
{
    public string RemoveDuplicates(string s)
    {
        var stack = new Stack<char>();
        foreach (char c in s)
        {
            if (stack.Count > 0)
                if (stack.Peek() == c)
                    stack.Pop();
                else
                    stack.Push(c);
            else
                stack.Push(c);
        }
        return string.Concat(stack.Reverse());

    }
}