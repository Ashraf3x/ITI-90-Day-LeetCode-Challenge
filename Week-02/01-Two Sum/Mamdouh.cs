 public class Solution
 {
     public int[] TwoSum(int[] nums, int target)
     {
         Dictionary<int,int> dict = new(); //key : number value, value : number index
         for(int i=0;i<nums.Length; i++)
         {
             if(dict.ContainsKey(target - nums[i]))
             {
                 return new int[] { i, dict[target-nums[i]] };
             }
             else
             {
                dict.TryAdd(nums[i], i);
             }
         }

         return new int[] { };
     }
 }
