//Author :Ahmed Mamdouh
//Time : O(n), Space :O(n)
public class Solution
        {
            public int EvalRPN(string[] tokens)
            {
                Stack<int> stack = new();
                foreach(string token in tokens){
                    if(int.TryParse(token, out int value))
                    {
                        stack.Push(value);
                    }
                    else
                    {
                        if(token == "-")
                            stack.Push(-stack.Pop() +stack.Pop());
                        else if(token == "+")
                            stack.Push(stack.Pop() + stack.Pop());
                        else if(token == "*")
                            stack.Push(stack.Pop() * stack.Pop());
                        else
                        {
                            int denomenator = stack.Pop();
                            int nominator = stack.Pop();
                            stack.Push(nominator/denomenator);
                        }
                    }
                }
                return stack.Pop();
            }
        }
