// Author: Ashraf
// Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// Time Complexity: O(n)
// Space Complexity: O(n)
public class Solution {
    public string RemoveDuplicates(string s) {
        StringBuilder result = new StringBuilder();
        for(int i = 0; i < s.Length; i++) {
            if(result.Length > 0 && s[i] == result[result.Length - 1]) {
                result.Length--;
            } else {
                result.Append(s[i]);
            }
        }
        return result.ToString();
    }
}