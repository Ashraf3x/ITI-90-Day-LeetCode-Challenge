public class Solution {
    public int EvalRPN(string[] tokens) {
        Stack<int> st=new Stack<int>();
        foreach(string s in tokens){
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                int n1=st.Pop();
                int n2=st.Pop();

                if(s=="+"){
                    st.Push(n1+n2);
                }else if(s=="-"){
                    st.Push(n2-n1);
                }else if(s=="*"){
                    st.Push(n1*n2);
                }else if(s=="/"){
                    st.Push(n2/n1);
                }
            }else {
                st.Push(int.Parse(s));
            }
        }
          return st.Pop();
    }
  
}
