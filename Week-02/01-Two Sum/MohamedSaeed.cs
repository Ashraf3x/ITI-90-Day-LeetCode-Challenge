// Author: Mohamed Saeed
// Link: https://leetcode.com/problems/two-sum/
// Time Complexity: O(n2)
// Space Complexity: O(2n)


public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        var map = new Dictionary<int, int>();
        
        for (int i = 0; i < nums.Length; i++) {
            int complement = target - nums[i];
            if (map.ContainsKey(complement)) {
                return new int[] { map[complement], i };
            }
            
            map[nums[i]] = i;
        }
        
        return new int[] {};
    }
}
