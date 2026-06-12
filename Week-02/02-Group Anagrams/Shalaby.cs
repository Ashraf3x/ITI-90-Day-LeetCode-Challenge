// Author: Ahmed Shalaby
// Problem: Group Anagrams
// Link: https://leetcode.com/problems/group-anagrams/
// Time: O(n * k log k)
// Space: O(n * k)
namespace GroupAnagrams
{
    public class Program
    {
        public static IList<IList<string>> GroupAnagrams(string[] strs)
        {
            Dictionary<string, IList<string>> map = new();

            foreach (var word in strs)
            {
                char[] chars = word.ToCharArray();
                Array.Sort(chars);
                string key = new string(chars);

                if (!map.ContainsKey(key))
                {
                    map[key] = new List<string>();
                }
                map[key].Add(word);

            }
            return map.Values.ToList();
        }
        public static void Main(string[] args)
        {
            string[] arr = new string[] { "eat", "tea", "tan", "ate", "nat", "bat" };
            var result = GroupAnagrams(arr);

            foreach (var group in result)
            {
                foreach (var word in group)
                {
                    Console.WriteLine(word);
                }

                Console.WriteLine("----");
            }
        }
    }
}
