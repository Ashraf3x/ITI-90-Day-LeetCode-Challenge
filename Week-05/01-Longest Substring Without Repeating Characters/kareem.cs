public class Solution
{
    public int LengthOfLongestSubstring(string s)
    {
        int longest = 0;
        HashSet<char> MyHash = new();
        int left =0;
        for(int r=0; r<s.Length; r++){
            while(MyHash.Contains(s[r])){
                MyHash.Remove(s[left]);
                left++;
            }
            MyHash.Add(s[r]);
            longest = Math.Max(longest,r-left+1);
        }
        return longest;
    }
}
