// Author: Assem
// Problem:  Implement Stack using Queues
// Link: https://leetcode.com/problems/implement-stack-using-queues/description/
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    queue<int> q;

    void push(int x)
    {
        q.push(x);

        int sz = q.size();

        for (int i = 0; i < sz - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        int x = q.front();
        q.pop();
        return x;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    /**
     * Your MyStack object will be instantiated and called as such:
     * MyStack* obj = new MyStack();
     * obj->push(x);
     * int param_2 = obj->pop();
     * int param_3 = obj->top();
     * bool param_4 = obj->empty();
     */
    return 0;
}
