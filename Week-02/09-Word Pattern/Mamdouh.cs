public class Solution
{
    public bool WordPattern(string pattern, string s)
    {
        string[] words = s.Split(' ');
        HashSet<string> takenWords = new();

        Dictionary<char, string> patternWord = new();

        if(pattern.Length != words.Length)
        {
            return false;
        }

        for(int i=0; i < words.Length; i++)
        {
            if (patternWord.ContainsKey(pattern[i]))
            {
                if (patternWord[pattern[i]] != words[i])
                {
                    return false;
                }
            }
            else
            {
                if (!takenWords.Add(words[i])) //tries to add, if failed then the word is taken before 
                {
                    return false;
                }
                patternWord.Add(pattern[i], words[i]);
            }
        }
        return true;
    }
}
