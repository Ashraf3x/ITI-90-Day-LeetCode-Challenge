public class Solution {
    public int[] NextGreaterElement(int[] nums1, int[] nums2) {
        int[] resArr = new int[nums1.Length];
        for(int i = 0; i< nums1.Length; i++){
            int index = -1;
            for(int j=0; j<nums2.Length; j++){
                if(nums1[i] == nums2[j]){
                    index = j;
                    break;
                }
            }

            resArr[i] = -1;
            for(int j=index +1; j<nums2.Length; j++){
                if(nums1[i] < nums2[j]){
                    resArr[i] = nums2[j];
                    break;
                }
            }
        }
        return resArr;
    }
}
