// Author: Assem
// Problem:  Min Stack
// Link: https://leetcode.com/problems/min-stack/description/
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class MinStack //["MinStack","push","push","push","getMin","top","pop","getMin"]
{              // -2 0 1
public:
    stack<int> s;
    stack<int> mins;
    MinStack()
    {
        s = {};
        mins = {};
    }
    void push(int val)
    {
        if (s.empty() || val <= mins.top())
        {
            mins.push(val);
        }
        s.push(val);
    }

    void pop()
    {
        if (s.top() == mins.top())
        {
            mins.pop();
        }
        s.pop();
    }

    int top()
    {
        return s.top();
    }

    int getMin()
    {
        return mins.top();
    }
};

int main()
{
    /**
     * Your MinStack object will be instantiated and called as such:
     * MinStack* obj = new MinStack();
     * obj->push(val);
     * obj->pop();
     * int param_3 = obj->top();
     * int param_4 = obj->getMin();
     */
    return 0;
}
