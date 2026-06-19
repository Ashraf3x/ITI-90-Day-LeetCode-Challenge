public class Solution {
    public int[] Intersection(int[] nums1, int[] nums2) {
        HashSet<int> set = new HashSet<int>(nums1);
        HashSet<int> inter = new HashSet<int>();
        int length = 0;

        for(int i = 0; i < nums2.Length; i++) {
            if(set.Contains(nums2[i]) && !inter.Contains(nums2[i])) {
                inter.Add(nums2[i]);
                length++;
            }
        }

        int[] arr = new int[length];
        int j = 0;
        foreach(var n in inter) {
            arr[j] = n;
            j++;
        }

        return arr;
    }
}
