public class MyStack {

    public MyStack() {
        
    }
    Queue<int> q1 = new();
    Queue<int> q2 = new();
    public void Push(int x) {
        q2.Enqueue(x);
        while(q1.Count != 0){
            q2.Enqueue(q1.Dequeue());
        }
        while(q2.Count != 0){
            q1.Enqueue(q2.Dequeue());
        }
    }
    
    public int Pop() {
        return q1.Dequeue();
    }
    
    public int Top() {
        return q1.Peek();
    }
    
    public bool Empty() {
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
