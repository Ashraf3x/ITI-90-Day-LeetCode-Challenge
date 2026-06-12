    public class Solution
    {
        public IList<IList<string>> GroupAnagrams(string[] strs)
        {
            int anagramsCounter = 0;
            Dictionary<string, int > dict = new();
            IList<IList<string>> result = new List<IList<string>>();

            foreach (string s in strs)
            {
                string orderedStr = string.Concat(s.Order());
                if (dict.ContainsKey(orderedStr))
                {
                    //result[dict[orderedStr]].Add(s);
                    result[dict[orderedStr]].Add(s);
                }
                else
                {
                    dict.Add(orderedStr, anagramsCounter);
                    result.Add(new List<string>());
                    result[anagramsCounter].Add(s);
                    anagramsCounter++;

                }
            }
            return result;
        }
    }
