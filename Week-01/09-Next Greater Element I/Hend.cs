public class Solution {
    public int[] NextGreaterElement(int[] nums1, int[] nums2) {
         int[] res = new int[nums1.Length];
        for(int i=0;i<nums1.Length;i++){
            int index = -1;
            for(int j = 0; j < nums2.Length; j++) {
                if(nums2[j] == nums1[i]) {
                    index = j;
                    break;
                }
            }
            
            int next = -1;
            for(int k = index + 1; k < nums2.Length; k++) {
                if(nums2[k] > nums1[i]) {
                    next = nums2[k];
                    break;
                }
            }
            res[i] = next;
        }
        return res;
    }
}
