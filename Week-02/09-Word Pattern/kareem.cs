public class Solution {
    public bool WordPattern(string pattern, string s) {
        var characters = pattern.ToCharArray();
        var words = s.Split(' ').ToList();
        Dictionary<char, string> map = new();
        HashSet<string> used = new();
        if(characters.Length != words.Count) return false;
for(int i = 0; i < words.Count; i++)
{
    if(!map.ContainsKey(characters[i]))
    {
        if(used.Contains(words[i]))
            return false;

        map.Add(characters[i], words[i]);
        used.Add(words[i]);
    }
    else
    {
        if(map[characters[i]] != words[i])
            return false;
    }
}
        
        return true;
    }
}
