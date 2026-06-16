// Author: Ahmed Shalaby
// Problem: Isomorphic Strings
// Link: https://leetcode.com/problems/isomorphic-strings/
// Approach: HashMap / Dictionary
// Store character mappings from s -> t and verify consistency.
// Time Complexity: O(n)
// Space Complexity: O(n)

namespace WordPatternProblem
{
    public class Program
    {
        public static bool IsIsomorphic(string s, string t)
        {
            if (s.Length != t.Length) return false;
            Dictionary<char, char> dict = new Dictionary<char, char>();
            Dictionary<char, char> dict2 = new Dictionary<char, char>();

            for (int i = 0; i < s.Length; i++)
            {
                if (dict.ContainsKey(s[i]))
                {
                    if (t[i] != dict[s[i]])
                    {
                        return false;
                    }
                }
                if (!dict.ContainsKey(s[i]))
                {
                    dict.Add(s[i], t[i]);
                }



                if (dict2.ContainsKey(t[i]))
                {
                    if (s[i] != dict2[t[i]])
                    {
                        return false;
                    }
                }
                if (!dict2.ContainsKey(t[i]))
                {
                    dict2.Add(t[i], s[i]);
                }
            }

            return true;
        }
        public static void Main(string[] args)
        {
            Console.WriteLine(IsIsomorphic("badc", "baba"));
        }
    }
}
