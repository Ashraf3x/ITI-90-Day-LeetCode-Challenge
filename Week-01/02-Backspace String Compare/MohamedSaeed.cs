// Author: Mohamed Saeed
// Link: https://leetcode.com/problems/backspace-string-compare/
// Time Complexity: O(n)
// Space Complexity: O(n)

public class Solution {
    public bool BackspaceCompare(string s, string t) {

        return GetString(s).Equals(GetString(t));
    }


    public string GetString(string st) {

        StringBuilder stb = new StringBuilder();

        foreach(char c in st) {
            if(c == '#') {
                if(stb.Length == 0) continue;
                stb.Length--;
                continue;
            }
            stb.Append(c);
        }
        return stb.ToString();
    }

}


