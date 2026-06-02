// Author: Mohamed Saeed
// Link: https://leetcode.com/problems/implement-queue-using-stacks/
// Time Complexity: O(n)
// Space Complexity: O(n)

public class MyQueue {

    Stack<int> fstack  = new(); // for Push
    Stack<int> lstack = new();   // for Pop & Peek

    public MyQueue() {
        
    }
    
    public void Push(int x) {
        fstack.Push(x);
    }
    
    public int Pop() {
        if (lstack.Count == 0)
            while (fstack.Count != 0) lstack.Push(fstack.Pop());

        return lstack.Pop();
    }
    
    public int Peek() {
        if (lstack.Count == 0)
            while (fstack.Count != 0) lstack.Push(fstack.Pop());
        
        return lstack.Peek();
    }
    
    public bool Empty() {
        return fstack.Count() == 0 && lstack.Count() == 0;
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.Push(x);
 * int param_2 = obj.Pop();
 * int param_3 = obj.Peek();
 * bool param_4 = obj.Empty();
 */
