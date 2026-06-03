// Author: Ashraf
// Link: https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto it : tokens) {
            if (it == "+" || it == "-" || it == "*" || it == "/") {
                int r = st.top();
                st.pop();
                int l = st.top();
                st.pop();
                if (it == "+")
                    st.push(l + r);
                else if (it == "-")
                    st.push(l - r);
                else if (it == "*")
                    st.push(l * r);
                else
                    st.push(l / r);
            } else
                st.push(stoi(it));
        }

        return st.top();
    }
};