// Author: Ahmed Shalaby
// Problem: Word Pattern
// Link: https://leetcode.com/problems/word-pattern/
// Approach: HashMap / Dictionary
// Time Complexity: O(n)
// Space Complexity: O(n)

namespace WordPatternProblem
{
    public class Program
    {
        public static bool WordPattern(string pattern, string s)
        {
            string[] arr = s.Split(' ');
            Dictionary<char, string> dict = new Dictionary<char, string>();
            HashSet<string> visited = new();

            if (pattern.Length != arr.Length)
                return false;

            for (int i = 0; i < pattern.Length; i++)
            {
                if (dict.ContainsKey(pattern[i]))
                {
                    if (dict[pattern[i]] != arr[i])
                    {
                        return false;
                    }
                }
                else
                {
                    if (visited.Contains(arr[i])) return false;

                    dict[pattern[i]] = arr[i];
                    visited.Add(arr[i]);
                }
            }
            return true;
        }
        public static void Main(string[] args)
        {
            Console.WriteLine(WordPattern("abba", "dog dog dog dog"));
        }
    }
}
