// Author: Ashraf
// Link: https://leetcode.com/problems/implement-queue-using-stacks/description/
// Time Complexity: 
// Push Operation - O(n)
// Pop Operation - O(1)
// Peek Operation - O(1)
// Empty Operation - O(1)
// Space Complexity: O(n)
class MyQueue {
public
    stackint st1;
    stackint st2;
    MyQueue() {}
    void push(int val) { st1.push(val); }

    int pop() {
        if (!st2.empty()) {
            int val = st2.top();
            st2.pop();
            return val;
        } else {
            while (!st1.empty()) {
                int val = st1.top();
                st1.pop();
                st2.push(val);
            }

            int val = st2.top();
            st2.pop();
            return val;
        }
    }
    int peek() {
        if (!st2.empty()) {
            return st2.top();
        } else {
            while (!st1.empty()) {
                int val = st1.top();
                st1.pop();
                st2.push(val);
            }

            return st2.top();
        }
    }
    bool empty() { return st1.empty() and st2.empty(); }
};
