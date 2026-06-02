public class Solution {
    public int CalPoints(string[] operations) {
        Stack<int> stack = new Stack<int>();

        foreach (string op in operations)
        {
            if (op != "C" && op != "D" && op != "+")
            {
                stack.Push(int.Parse(op));
            }

            else if (op == "C")
            {
                stack.Pop();
            }

            else if (op == "D")
            {
                int last = stack.Peek();
                stack.Push(last * 2);
            }

            else if (op == "+")
            {
                int first = stack.Pop();
                int second = stack.Peek();
                int sum = first + second;

                stack.Push(first);   
                stack.Push(sum);    
            }
        }

        int result = 0;
        foreach (int num in stack)
        {
            result += num;
        }

        return result;
    
    }
}
