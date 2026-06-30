// Author: Ashraf
// Link: https://leetcode.com/problems/valid-parentheses/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public
    bool isValid(string s) {
        stack<char> st;
        for (auto it  s) {
            if (!st.empty() && ((st.top() == '(' && it == ')') 
                                (st.top() == '[' && it == ']') 
                                (st.top() == '{' && it == '}')))
                st.pop();
            else
                st.push(it);
        }
        return st.empty();
    }
};
