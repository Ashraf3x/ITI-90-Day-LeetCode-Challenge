public class Solution {
    public int LongestConsecutive(int[] nums) {
        var counter =1;
        List<int> list = new();
        nums.Sort();

        if(nums.Length == 0){
            return 0;
        }
        else if(nums.Length == 1){
            return 1;
        }
        for(int i=0; i<nums.Length - 1; i++){
            if(nums[i+1] - nums[i] == 1){

                counter++;
            } 
            else if(nums[i+1] - nums[i] == 0){

            }
            else{
                list.Add(counter);
                counter = 1;
            } 
        }
        list.Add(counter);
        return list.Max();
    }
}
