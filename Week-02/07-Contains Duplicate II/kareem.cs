public class Solution {
    public bool ContainsNearbyDuplicate(int[] nums, int k) {
        Dictionary<int,int> map = new();
        for(int i=0; i< nums.Length; i++){
            if(map.TryGetValue(nums[i],  out int index)){
                if(i - index <= k ){
                    return true;    
                }
            }
            map[nums[i]] = i;
        }
        return false;
    }
}
