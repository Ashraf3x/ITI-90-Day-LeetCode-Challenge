public class Solution {
    public bool BackspaceCompare(string s, string t) 
    {
        return Build(s).SequenceEqual(Build(t));
    }

    public static Stack<char> Build(string txt)
    {
        Stack<char> stack = new Stack<char>();

        foreach (char c in txt)
        {
            if (c == '#')
            {
                if (stack.Count > 0)
                    stack.Pop();
            }
            else
            {
                stack.Push(c);
            }
        }

        return stack;
    }
}
