public class Solution {
    public string RemoveDuplicates(string s) {
            Stack<char> myStack = new();
            for (int i = 0; i < s.Length; i++)
            {
                if(myStack.Count > 0)
                {
                    if (s[i] == myStack.Peek())
                    {
                        myStack.Pop();
                    }
                    else
                    {
                        myStack.Push(s[i]);
                    }
                }
                else
                {
                    myStack.Push(s[i]);
                }
            }
            return new string(myStack.Reverse().ToArray());
    }
}
