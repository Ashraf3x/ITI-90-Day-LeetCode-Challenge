public class MinStack {

    public MinStack() {
        
    }
    Stack<int> stack = new();
    Stack<int> minStack = new();
    public void Push(int value) {
        stack.Push(value);
        if(minStack.Count == 0 || minStack.Peek() >= value){
            minStack.Push(value);
        }
    }
    
    public void Pop() {
        if(stack.Peek() == minStack.Peek()){
            minStack.Pop();
        }
        stack.Pop();
    }
    
    public int Top() {
        return stack.Peek();
    }
    
    public int GetMin() {
        return minStack.Peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.Push(value);
 * obj.Pop();
 * int param_3 = obj.Top();
 * int param_4 = obj.GetMin();
 */
