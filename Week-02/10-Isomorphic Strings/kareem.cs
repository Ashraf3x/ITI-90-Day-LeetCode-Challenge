public class Solution {
    public bool IsIsomorphic(string s, string t) {
        if(s.Length != t.Length) return false;
        HashSet<char> used = new();
        Dictionary<char ,char> map = new();
        for(int i=0; i<s.Length; i++){
            if(map.TryGetValue(s[i], out char value)){
                if(value != t[i]){
                    return false;
                }
            }
            else{
                if(used.Contains(t[i])){
                    return false;
                }
                map.Add(s[i],t[i]);
                used.Add(t[i]);
            }
        }
        return true;
    }
}
