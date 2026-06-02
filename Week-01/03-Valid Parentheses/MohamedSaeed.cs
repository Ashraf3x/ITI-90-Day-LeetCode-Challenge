// Author: Mohamed Saeed
// Link: https://leetcode.com/problems/valid-parentheses/
// Time Complexity: O(n)
// Space Complexity: O(n)

public class Solution {
    public bool IsValid(string s) {
        
        Stack<char> stack = new();

        foreach(char c in s) {
            if(c == '(' || c == '{' || c == '[') stack.Push(c);
            else if(c == ')' && stack.Count() != 0 && stack.Peek() == '(') stack.Pop();
            else if(c == '}' && stack.Count() != 0 && stack.Peek() == '{') stack.Pop();
            else if(c == ']' && stack.Count() != 0 && stack.Peek() == '[') stack.Pop();
            else return false;
        }
        if(stack.Count() == 0) return true;
        return false;
    }
}