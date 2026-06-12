public class Solution {
    public int EvalRPN(string[] tokens) {
        Stack<int> numbers = new();
        int res;

        for(int i = 0; i<tokens.Length; i++){
            if(tokens[i] == "+"){
                var num1 = numbers.Pop();
                var num2 = numbers.Pop();
                res = num2 + num1;
                numbers.Push(res);
            }
            else if(tokens[i] == "-"){
                var num1 = numbers.Pop();
                var num2 = numbers.Pop();
                res = num2 - num1;
                numbers.Push(res);
            }
            else if(tokens[i] == "*"){
                var num1 = numbers.Pop();
                var num2 = numbers.Pop();
                res = num2 * num1;
                numbers.Push(res);
            }
            else if(tokens[i] == "/"){
                var num1 = numbers.Pop();
                var num2 = numbers.Pop();
                res = num2 / num1;
                numbers.Push(res);
            }
            else{
                var number = int.Parse(tokens[i]);
                numbers.Push(number);
            }
        }
        return numbers.Peek();
    }
}
