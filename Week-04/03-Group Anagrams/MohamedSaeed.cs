public class Solution {
    public IList<IList<string>> GroupAnagrams(string[] strs) {
        Dictionary<String, List<String>> map = new();

        foreach(var s in strs) {
            char[] chars = s.ToCharArray();
            Array.Sort(chars);
            string key = new string(chars);

            if (!map.ContainsKey(key)) {
                map[key] = new List<string>();
            }

            map[key].Add(s);
        }

        return map.Values.Cast<IList<string>>().ToList();
    }
}
