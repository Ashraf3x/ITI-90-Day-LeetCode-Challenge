 public class Solution
 {
     public bool IsIsomorphic(string s, string t)
     {
         Dictionary<char, char> mapping = new();

         for(int i=0; i < s.Length; i++)
         {
             if (mapping.ContainsKey(s[i]))
             {
                 if (mapping[s[i]] != t[i])
                 {
                     return false;
                 }
             }
             else
             {
                 //before add, make sure that the value is not taken before
                 if (mapping.ContainsValue(t[i]))
                     return false;

                 mapping.Add(s[i], t[i]);
             }
         }
         return true;
     }
 }
