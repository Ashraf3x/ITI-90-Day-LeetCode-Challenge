// Author: Mohamed Saeed
// Link: https://leetcode.com/problems/evaluate-reverse-polish-notation/
// Time Complexity: O(n)
// Space Complexity: O(n)

public class Solution {
    public int EvalRPN(string[] tokens) {
        
        Stack<int> nums = new Stack<int>();

        foreach(var token in tokens) {
            if(token == "+" || token == "-" || token == "*" || token == "/") {
                int r = nums.Peek();
                nums.Pop();
                int l = nums.Peek();
                nums.Pop();

                if(token == "+") {
                    nums.Push(l+r);
                }
                else if(token == "-") {
                    nums.Push(l-r);
                }
                else if(token == "*") {
                    nums.Push(l*r);
                }
                else if(token == "/") {
                    nums.Push(l/r);
                }
            }
            else nums.Push(int.Parse(token));
        }

        return nums.Peek();
    }
}
