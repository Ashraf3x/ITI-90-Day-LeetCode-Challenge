public class Solution {
    public IList<IList<string>> GroupAnagrams(string[] strs) {
        IList<IList<string>> res = new List<IList<string>>();
        Dictionary<string, int> Dic = new();
        var count =0;
        for(int i=0; i< strs.Length; i++){
            var arr = strs[i].ToCharArray();
            Array.Sort(arr);
            var sortedStr = string.Join("",arr);
            if(Dic.Count > 0 && Dic.TryGetValue(sortedStr,out int Index)){
res[Index].Add(strs[i]);
            }
            else{

                                    res.Add(new List<string> { strs[i] });

                    Dic[sortedStr] = res.Count - 1;
            }
        }
        return res;
    }
}
