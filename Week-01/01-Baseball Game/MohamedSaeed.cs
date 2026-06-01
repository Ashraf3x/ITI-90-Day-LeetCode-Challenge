// Author: Mohamed Saeed
// Link: https://leetcode.com/problems/baseball-game/
// Time Complexity: O(n)
// Space Complexity: O(n)

public class Solution {
    public int CalPoints(string[] operations) {
        
        Stack<int> scores = new Stack<int>();
        int sum = 0;

        for(int i = 0; i < operations.Length; i++) {
            switch(operations[i]) {
                case "C":
                    scores.Pop();
                    break;
                case "D":
                    scores.Push(scores.Peek() * 2);
                    break;
                case "+":
                    int peek = scores.Pop();
                    int newPeek = peek + scores.Peek();
                    scores.Push(peek);
                    scores.Push(newPeek);
                    break;

                default : // case of numbers
                    scores.Push(int.Parse(operations[i]));
                    break;
            }
        }


        foreach (var item in scores)
        {
            sum += item;
        }
        return sum;
    }
}