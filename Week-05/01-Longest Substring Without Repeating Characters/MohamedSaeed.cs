public class Solution {
    public int LengthOfLongestSubstring(string s) {
        int longest = 0;
        bool contain = false;
        HashSet<char> set = new();

        for(int i = 0; i < s.Length; i++) {
            for(int j = i; j < s.Length; j++) {
                if(set.Contains(s[j])) {
                    longest = longest >= set.Count() ? longest : set.Count();
                    set.Clear();
                    contain = true;
                    break;
                }
                set.Add(s[j]);
            }
        }

        return contain? longest : set.Count();
    }
}
