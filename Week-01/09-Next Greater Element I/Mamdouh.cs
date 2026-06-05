//Author : Ahmed Mamdouh
//Time O(n+m), Space : O(n+m)

public class Solution
{
    public int[] NextGreaterElement(int[] nums1, int[] nums2)
    {
        Dictionary<int, int> dict = new();
        Stack<int> stack = new();

        foreach(int num in nums2)
        {
            while (stack.Count > 0 && stack.Peek() < num)
            {
                dict.Add(stack.Pop(), num);                            
            }
            stack.Push(num);
        }

        int[] result = new int[nums1.Length];

        for(int i = 0;i < nums1.Length; i++)
        {
            result[i] = dict.ContainsKey(nums1[i]) ? dict[nums1[i]] : -1;
        }

        return result;
    }
}
