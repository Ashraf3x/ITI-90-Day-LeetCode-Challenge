

// Author: Ahmed Mamdouh
// Link: https://leetcode.com/problems/valid-parentheses/
// Time Complexity: O(n)
// Space Complexity: O(n)


public class Solution
{
    public bool IsValid(string s)
    {
        Stack<char> stack = new();
        for(int i = 0; i < s.Length; i++)
        {
            if (s[i] == '{' || s[i] =='[' || s[i] == '(')
            {
                stack.Push(s[i]);
            }
            else
            {
                if (stack.Count > 0)
                {
                    char top = stack.Peek();

                    if ((s[i] == '}' && top == '{') || (s[i] == ')' && top == '(') || (s[i] == ']' && top == '['))
                    {
                        stack.Pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
           
        }
        return stack.Count == 0 ? true : false;
    }
}
