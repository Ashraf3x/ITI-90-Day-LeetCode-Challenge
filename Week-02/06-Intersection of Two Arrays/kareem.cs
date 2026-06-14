public class Solution {
    public int[] Intersection(int[] nums1, int[] nums2) {
        Dictionary<int,int> map = new();
        
        List<int> res = new();
        for(int i=0; i< nums1.Length; i++){
            if(!map.ContainsKey(nums1[i])){
                map.Add(nums1[i],i);
            }
        }
        for(int i=0; i< nums2.Length; i++){
            if(map.ContainsKey(nums2[i])){
                res.Add(nums2[i]);
            }
        }
        return res.Distinct().ToArray();
    }
}
