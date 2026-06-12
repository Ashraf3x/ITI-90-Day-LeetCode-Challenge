// Author: Ahmed Shalaby
// Problem: Longest Consecutive Sequence
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Approach: HashSet
// Time Complexity: O(n)
// Space Complexity: O(n)

namespace LongestConsecutiveSequence
{
    public class Program
    {
        public static int LongestConsecutive(int[] nums) //[100,4,200,1,3,2]
        {
            HashSet<int> set = new HashSet<int>(nums);
            int longest = 0;
            foreach (var num in set)
            {
                if (!set.Contains(num - 1))
                {
                    int currLen = 1;
                    int currNum = num;
                    while (set.Contains(currNum + 1))
                    {
                        currLen++;
                        currNum++;
                    }
                    longest = Math.Max(longest,currLen);
                }
            }
            return longest;
        }

        public static void Main(string[] args)
        {
            int[] nums = { 0, 3, 7, 2, 5, 8, 4, 6, 0, 1 };

            int result = LongestConsecutive(nums);

            Console.WriteLine(result);

        }
    }
}
