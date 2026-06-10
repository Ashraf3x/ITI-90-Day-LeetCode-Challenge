// Author: Ahmed Shalaby
// Problem: Subarray Sum Equals K
// Link: https://leetcode.com/problems/subarray-sum-equals-k/
// Time: O(n^2)
// Space: O(1)

namespace SubarraySumEqualsK
{
    public class Program
    {
        public static int SubarraySum(int[] nums, int k)
        {
            int count = 0;
            for (int i = 0; i < nums.Length; i++)
            {
                int sum = 0;
                for (int j = i; j < nums.Length; j++)
                {
                    sum += nums[j];
                    if (sum == k)
                    {
                        count++;
                    }
                }
            }
            return count;
        }
        public static void Main(string[] args)
        {
            int[] arr = new int[] { 1, 2, 3 };
            var result = SubarraySum(arr, 3);
            Console.WriteLine(result);
            
        }
    }
}
