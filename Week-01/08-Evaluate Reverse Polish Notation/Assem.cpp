// Author: Assem
// Problem: Evaluate Reverse Polish Notation
// Link: https://leetcode.com/problems/evaluate-reverse-polish-notation/
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    stack<string> numbers;
    stack<string> operands;
    int number1 = 0;
    int number2 = 0;
    int result = 0;
    int count = 0;
    string supop;
    int evalRPN(vector<string> &tokens)
    {
        if (tokens.size() == 1)
        {
            return stoi(tokens[0]);
        }
        for (int i = 0; i < tokens.size(); i++)
        {
            if (!(tokens[i] == "+" || tokens[i] == "*" || tokens[i] == "/" || tokens[i] == "-"))
            {
                numbers.push(tokens[i]);
                count++;
            }
            else if ((tokens[i] == "+" || tokens[i] == "*" || tokens[i] == "/" || tokens[i] == "-") && count > 1)
            {
                number1 = stoi(numbers.top());
                numbers.pop();
                number2 = stoi(numbers.top());
                numbers.pop();

                count -= 2;

                if (tokens[i] == "+")
                {
                    result = number2 + number1;
                    numbers.push(to_string(result));
                    count++;
                }
                if (tokens[i] == "/")
                {
                    result = number2 / number1;
                    numbers.push(to_string(result));
                    count++;
                }
                if (tokens[i] == "-")
                {
                    result = number2 - number1;
                    numbers.push(to_string(result));
                    count++;
                }
                if (tokens[i] == "*")
                {
                    result = number2 * number1;
                    numbers.push(to_string(result));
                    count++;
                }
            }
            else if (!operands.empty() && count > 1)
            {
                supop = operands.top();
                operands.pop();

                number1 = stoi(numbers.top());
                numbers.pop();
                number2 = stoi(numbers.top());
                numbers.pop();

                count -= 2;

                if (supop == "+")
                {
                    result = number2 + number1;
                    numbers.push(to_string(result));
                    count++;
                }
                if (supop == "/")
                {
                    result = number2 / number1;
                    numbers.push(to_string(result));
                    count++;
                }
                if (supop == "-")
                {
                    result = number2 - number1;
                    numbers.push(to_string(result));
                    count++;
                }
                if (supop == "*")
                {
                    result = number2 * number1;
                    numbers.push(to_string(result));
                    count++;
                }
            }
            else
            {
                operands.push(tokens[i]);
            }
        }
        return result;
    }
};

int main()
{

    return 0;
}
