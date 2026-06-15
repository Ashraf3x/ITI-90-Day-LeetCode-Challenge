public class Solution {
    public int SubarraySum(int[] nums, int k) {
        Dictionary<int, int> prefixSum = new();

        prefixSum[0] = 1;

        int sum = 0;
        int count = 0;

        foreach(var n in nums) {
            sum += n;

            if(prefixSum.ContainsKey(sum-k)) {
                count += prefixSum[sum-k];
            }

            prefixSum[sum] = prefixSum.GetValueOrDefault(sum, 0) +1;
        }

        return count;
    }
}
