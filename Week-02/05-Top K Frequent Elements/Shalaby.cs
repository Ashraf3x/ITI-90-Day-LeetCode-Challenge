// Author: Ahmed Shalaby
// Problem: Top K Frequent Elements
// Link: https://leetcode.com/problems/top-k-frequent-elements/
// Approach: Dictionary + Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(n)

namespace LongestConsecutiveSequence
{
    public class Program
    {
        public static int[] TopKFrequent(int[] nums, int k) //[1, 1, 1, 2, 2, 3]
        {
            Dictionary<int, int> dict = new Dictionary<int, int>();
            foreach (var num in nums)
            {
                int count = 0;
                
                if (!dict.ContainsKey(num))
                {
                    dict[num] = 0;
                }
                if (dict.ContainsKey(num))
                {
                    dict[num]++;
                }
            }
            
             int[] arr = dict.OrderByDescending(x => x.Value).Take(k).Select(x=>x.Key).ToArray();
            return arr;


        }

        public static void Main(string[] args)
        {
            int[] arr = new int[] { 1, 1, 1, 2, 2, 3 };
            int[] arr2 = TopKFrequent(arr, 2);
            foreach (var item in arr2)
            {
                Console.WriteLine(item);
            }
        }
    }
}
