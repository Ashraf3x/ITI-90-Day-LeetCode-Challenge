public class Solution
{
    public int SubarraySum(int[] nums, int k)
    {
        Dictionary<int,int> dict = new();
        int counter = 0;
        int sum = 0;
        dict.Add(0, 1);
        foreach(int num in nums)
        {
            sum += num;
            if (dict.ContainsKey(sum - k))
            {
                counter += dict[sum - k];
            }

            if (dict.ContainsKey(sum))
            {
                dict[sum]++;
            }
            else
            {
                dict.Add(sum, 1);
            }
        }

        return counter; 
    }
}
