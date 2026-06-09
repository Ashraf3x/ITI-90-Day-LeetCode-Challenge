// Author: Ahmed Shalaby
// Problem: TwoSum
// Link: https://leetcode.com/problems/two-sum/
// Time: O(n^2)
// Space: O(1)
namespace TwoSumProblem
{
    public class Program
    {
        public static int[] TwoSum(int[] nums, int target)
        {
            int[] arr = new int[2];
            for (int i = 0; i <= nums.Length-1; i++)
            {
                for (int j = i + 1; j <= nums.Length-1; j++)
                {
                    if (target - nums[i] == nums[j])
                    {
                        arr[0] = i;
                        arr[1] = j;
                    }
                }
            }
            return arr;
        }
        public static void Main(string[] args)
        {
            int[] arr =  TwoSum(new int[] { 3, 3 }, 6);

            for (int i = 0; i < arr.Length; i++)
            {
                Console.WriteLine(arr[i]);
            }
        }
    }
}
