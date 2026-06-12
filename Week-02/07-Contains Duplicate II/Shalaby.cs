// Author: Ahmed Shalaby
// Problem: Contains Duplicate II
// Link: https://leetcode.com/problems/contains-duplicate-ii/
// Approach: HashSet + Sliding Window
// Time Complexity: O(n)
// Space Complexity: O(k)

namespace ContainsDuplicateII
{
    public class Program
    {
        public static bool ContainsNearbyDuplicate(int[] nums, int k)
        {
            HashSet<int> set = new HashSet<int>();

            for (int i = 0; i < nums.Length; i++)
            {
                if (set.Contains(nums[i]))
                {
                    return true;
                }

                set.Add(nums[i]);

                if (set.Count > k)
                {
                    set.Remove(nums[i - k]);
                }
            }

            return false;
        }

        public static void Main(string[] args)
        {
            int[] nums = { 1, 2, 3, 1, 2, 3 };

            Console.WriteLine(ContainsNearbyDuplicate(nums, 2));
        }
    }
}
