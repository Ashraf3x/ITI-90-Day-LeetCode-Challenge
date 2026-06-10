 public class Solution
 {
     public int LongestConsecutive(int[] nums)
     {
         HashSet<int> set = new(nums);

         int currentCount = 0;
         int maxCount = 0;

         foreach(int num in nums)
         {
             if (!set.Contains(num - 1)) //here we start a new series
             {
                 int increasingNum = num;
                 currentCount = 1; 
                 while (set.Contains(++increasingNum)) {
                     currentCount++;
                 }
                 maxCount = maxCount < currentCount ? currentCount : maxCount;
             }
         }
         return maxCount;
     }
 }
