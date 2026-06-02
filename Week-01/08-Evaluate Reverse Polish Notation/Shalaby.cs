public class Solution {
    public int EvalRPN(string[] tokens) {
       Stack<int> stack = new Stack<int>();

        foreach (string token in tokens)
        {
            if (int.TryParse(token, out int digit))
            {
                stack.Push(digit);
            }
            else
            {
                int b = stack.Pop();
                int a = stack.Pop();
                switch (token)
                {
                    case "+":
                        stack.Push(a + b);
                        break;

                    case "-":
                        stack.Push(a - b);
                        break;

                    case "*":
                        stack.Push(a * b);
                        break;

                    case "/":
                        stack.Push(a / b);
                        break;
                }
            }
        }

        return stack.Pop(); 
    }
}
