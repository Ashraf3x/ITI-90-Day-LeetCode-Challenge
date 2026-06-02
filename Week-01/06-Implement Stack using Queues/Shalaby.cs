public class MyStack {

    Stack<int> stack = new Stack<int>();
public MyStack()
{
    
}

public void Push(int x)
{
    stack.Push(x);
}

public int Pop()
{
    return stack.Pop();
}

public int Top()
{
    return stack.Peek();
}

public bool Empty()
{
    return stack.Count == 0;
}
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.Push(x);
 * int param_2 = obj.Pop();
 * int param_3 = obj.Top();
 * bool param_4 = obj.Empty();
 */
