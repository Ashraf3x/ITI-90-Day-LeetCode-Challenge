// Author: Assem
// Problem: Evaluate Reverse Polish Notation
// Link: https://leetcode.com/problems/evaluate-reverse-polish-notation/
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int> st;

        for (string token : tokens)
        {
            if (token == "+" || token == "-" ||
                token == "*" || token == "/")
            {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                if (token == "+")
                    st.push(a + b);
                else if (token == "-")
                    st.push(a - b);
                else if (token == "*")
                    st.push(a * b);
                else
                    st.push(a / b);
            }
            else
            {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};

int main()
{

    return 0;
}
