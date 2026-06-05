// Author: Mohamed Saeed
// Link: https://leetcode.com/problems/next-greater-element-i/
// Time Complexity: O(n^2)
// Space Complexity: O(n)

public class Solution
{
    public int[] NextGreaterElement(int[] nums1, int[] nums2)
    {
        int[] result = new int[nums1.Length];

        for (int i = 0; i < nums1.Length; i++)
        {
            result[i] = -1;

            for (int j = 0; j < nums2.Length; j++)
            {
                if (nums1[i] == nums2[j])
                {
                    for (int k = j + 1; k < nums2.Length; k++)
                    {
                        if (nums2[k] > nums2[j])
                        {
                            result[i] = nums2[k];
                            break;
                        }
                    }

                    break;
                }
            }
        }

        return result;
    }
}
