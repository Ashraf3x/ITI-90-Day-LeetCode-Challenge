using System.Collections.Generic;
public class MyStack 
{
    public Queue<int> q1;
    public Queue<int> q2;
    public MyStack() 
    {  
        q1 = new Queue<int>();
        q2 = new Queue<int>();
    }
    
    public void Push(int x) 
    {
        q2.Enqueue(x);
        while (q1.Count > 0) 
        {
        q2.Enqueue(q1.Dequeue());
        }
        Queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

    }
    
    public int Pop() 
    {
        return q1.Dequeue();
    }
    
    public int Top()
    {
        return q1.Peek();
    }
    
    public bool Empty() 
    {
        return q1.Count == 0;
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
