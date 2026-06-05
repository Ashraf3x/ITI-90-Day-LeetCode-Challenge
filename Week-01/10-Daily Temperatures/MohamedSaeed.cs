// Author: Mohamed Saeed
// Link: https://leetcode.com/problems/daily-temperatures/
// Time Complexity: O(n)
// Space Complexity: O(2n)

public class Solution {
    public int[] DailyTemperatures(int[] temperatures) {

        int n = temperatures.Length;
        int[] ans = new int[n];

        Stack<int> stack = new();

        for(int i = 0; i < n; i++) {

            while(stack.Count > 0 && temperatures[i] > temperatures[stack.Peek()]) {
                int prev = stack.Pop();
                ans[prev] = i - prev;
            }

            stack.Push(i);
        }

        return ans;
    }
}
