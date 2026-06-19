public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
        var res = new int[k];
        Dictionary<int, int> freq = new();
        foreach(var num in nums){
            if(freq.ContainsKey(num)){
                freq[num]++;
            }
            else{
                freq[num] = 1;
            }
        }

        var list = new List<KeyValuePair<int,int>>(freq);
        list.Sort((a,b) => b.Value.CompareTo(a.Value));
        for(int i=0; i<k; i++){
            res[i] = list[i].Key;
        }
        return res;
    }
}
