// Author: Ahmed Shalaby
// Problem: Intersection of Two Arrays
// Link: https://leetcode.com/problems/intersection-of-two-arrays/
// Approach: HashSet
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)

namespace IntersectionOfTwoArrays
{
    public class Program
    {
        public static int[] Intersection(int[] nums1, int[] nums2)
        {
            HashSet<int> set1 = new HashSet<int>(nums1);
            HashSet<int> set2 = new HashSet<int>(nums2);
            HashSet<int> res = new();

            foreach (var s in set1)
            {
                if (set2.Contains(s))
                {
                    res.Add(s);
                }
            }
            return res.ToArray();
        }


        public static void Main(string[] args)
        {
            int[] nums1 = { 4,5,9 };
            int[] nums2 = { 9,4,9,8,4 };
            int[] res = Intersection(nums1, nums2);
            foreach (var r in res)
            {
                Console.WriteLine(r);
            }
        }
    }
}
