// Author: Eslam Mohmaed Salem
// Link: https://leetcode.com/problems/baseball-game/
// Time Complexity: O(n)
// Space Complexity: O(n)
public class Solution
{
    public int CalPoints(string[] operations)
    {
        Stack<int> stack = new Stack<int>();
        foreach (string str in operations)
        {
            switch (str)
            {
                case "+":
                    stack.Push(stack.Take(2).Sum());
                    break;

                case "D":
                    stack.Push(stack.Peek() * 2);
                    break;

                case "C":
                    stack.Pop();
                    break;

                default:
                    stack.Push(Convert.ToInt32(str));
                    break;
            }
        }
        return stack.Sum();
    }
}