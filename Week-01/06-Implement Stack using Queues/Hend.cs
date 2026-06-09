public class MyStack {
    Queue<int> q1;


    public MyStack() {
        q1=new Queue<int>();
    }
    
    public void Push(int x) {
        q1.Enqueue(x);
        int size=q1.Count;
        for(int i=0;i<size-1;i++){
            q1.Enqueue(q1.Dequeue());
        }
    }
    
    public int Pop() {
        
        return q1.Dequeue();
    }
    
    public int Top() {
        return q1.Peek();
    }
    
    public bool Empty() {
        return q1.Count==0 ;
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
