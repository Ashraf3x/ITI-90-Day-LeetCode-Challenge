 public class Solution
 {
     public int[] Intersection(int[] nums1, int[] nums2)
     {
         HashSet<int> set = new(nums1);
         HashSet<int> result = new();
         foreach(int num in nums2)
         {
             if (set.Contains(num))
             {
                 result.Add(num);
                 set.Remove(num); //to stop future duplication
             }
         }
         return result.ToArray();
     }
 }
