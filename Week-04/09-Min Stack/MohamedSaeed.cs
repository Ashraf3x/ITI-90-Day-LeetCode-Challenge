// Author: Mohamed Saeed
// Link: https://leetcode.com/problems/min-stack/
// Time Complexity: O(1)
// Space Complexity: O(2n)

public class MinStack {

    Stack<int> mainStack;
    Stack<int> min;

    public MinStack() {
        mainStack = new Stack<int>();
        min = new Stack<int>();
    }
    
    public void Push(int val) {
        mainStack.Push(val);
        if(min.Count() == 0) {
            min.Push(val);
        }
        else if(min.Peek() >= val) {
            min.Push(val);
        }
    }
    
    public void Pop() {
        int val = mainStack.Pop();
        if(val == min.Peek()){
            min.Pop();
        }
    }
    
    public int Top() {
        return mainStack.Peek();
    }
    
    public int GetMin() {
        return min.Peek();
    }
}

