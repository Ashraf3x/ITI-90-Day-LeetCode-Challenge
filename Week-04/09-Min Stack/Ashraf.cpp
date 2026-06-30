// Author: Ashraf
// Link: https://leetcode.com/problems/min-stack/description/
// Time Complexity: O(1)
// Space Complexity: O(2n)
class MinStack {
public:
    stack<int> main, mn;
    MinStack() {}

    void push(int val) {
        if (main.empty()) {
            main.push(val);
            mn.push(val);
        } else if (mn.top() >= val) {
            mn.push(val);
            main.push(val);
        } else
            main.push(val);
    }

    void pop() {
        if (main.top() == mn.top())
            mn.pop();
        main.pop();
    }

    int top() {
        int val = main.top();
        return val;
    }

    int getMin() {
        int val = mn.top();
        return val;
    }
};