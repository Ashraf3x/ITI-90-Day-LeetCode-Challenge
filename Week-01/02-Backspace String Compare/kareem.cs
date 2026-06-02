public class Solution {
        public bool BackspaceCompare(string s, string t)
        {
            var list1 = new List<char>();
            var list2 = new List<char>();

            foreach (var c in s)
            {
                if (c == '#')
                {
                    if(list1.Count >= 1)
                    {
                        list1.RemoveAt(list1.Count - 1);
                    }
                }
                else
                {
                    list1.Add(c);
                }

            }
            foreach (var c in t)
            {
                if (c == '#')
                {
                    if(list2.Count >= 1)
                    {
                        list2.RemoveAt(list2.Count - 1);
                    }
                }
                else
                {
                    list2.Add(c);
                }
            }
            return list1.SequenceEqual(list2);
        }
}
