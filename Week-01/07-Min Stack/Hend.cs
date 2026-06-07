public class MinStack {
    Stack<int> st;

    public MinStack() {
        st=new Stack<int>();
    }
    int minn= 2147483647;
    
    public void Push(int x) {
        st.Push(x);
        if(minn>=x) minn=x;
    }
    
    public void Pop() {
       int x= st.Pop();
        if(st.Count == 0)
        {
            minn = int.MaxValue;
            return;
        }

       minn=st.Peek();
        foreach(int it in st){
            if(minn>it) minn=it;
        }
    }
    
    public int Top() {
        return st.Peek();
    }
    
    public int GetMin() {
        return minn;
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
