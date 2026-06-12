public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        int[] res = new int[2];
        Dictionary<int, int> MyDic = new();
        for(int i=0; i< nums.Length; i++){
            if(MyDic.Count > 0 && MyDic.TryGetValue((target - nums[i]),out int FirstIndex)){
                
                var SecIndex = i;
                res[0] = FirstIndex;
                res[1] = SecIndex;
                break;
            }
            else if(!MyDic.ContainsKey(nums[i])){
                MyDic.Add(nums[i],i);
            }
        }
        return res;
    }
}
