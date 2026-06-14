public class Solution {
    public bool WordPattern(string pattern, string s) {
        
        Dictionary<char, string> map = new();
        HashSet<string> usedWords = new();
        
        string[] ss = s.Split(" ");
        int i = 0;

        if (pattern.Length != ss.Length) return false;

        foreach(char c in pattern) {
            string word = ss[i];

            if (map.ContainsKey(c))
            {
                if (map[c] != word)
                    return false;
            }
            else
            {
                if (usedWords.Contains(word))
                    return false;

                map[c] = word;
                usedWords.Add(word);
            }
            i++;
        }
        
        return true;
    }
}
