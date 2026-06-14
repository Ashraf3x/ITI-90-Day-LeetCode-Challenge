public class Solution {
public int SubarraySum(int[] nums, int k)
{
    Dictionary<int, int> map = new();

    map[0] = 1;

    int sum = 0;
    int count = 0;

    foreach (int num in nums)
    {
        sum += num;

        if (map.ContainsKey(sum - k))
            count += map[sum - k];

        map[sum] = map.GetValueOrDefault(sum, 0) + 1;
    }

    return count;
}
}
