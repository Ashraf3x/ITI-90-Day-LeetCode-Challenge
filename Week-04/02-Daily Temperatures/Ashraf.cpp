// Author: Ashraf
// Link: https://leetcode.com/problems/daily-temperatures/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> nxt(temperatures.size());
        stack<int> st;
        int i = 0;
        for (auto it : temperatures) {
            while (!st.empty() && temperatures[st.top()] < it) {
                nxt[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i++);
        }
        return nxt;
    }
};