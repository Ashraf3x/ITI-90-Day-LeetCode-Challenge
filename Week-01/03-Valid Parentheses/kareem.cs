public class Solution {
    public bool IsValid(string s) {
List<char> openBrackets = new();
for (int i = 0; i < s.Length; i++)
{
    if (s[i] == ')')
    {
        if(openBrackets.Count == 0)
        {
            return false;
        }
        if (openBrackets.Last() == '(')
        {
            openBrackets.RemoveAt(openBrackets.Count - 1);
        }
        else
        {
            return false;
        }
    }
    else if (s[i] == ']')
    {
        if (openBrackets.Count == 0)
        {
            return false;
        }
        if (openBrackets.Last() == '[')
        {
            openBrackets.RemoveAt(openBrackets.Count - 1);
        }
        else
        {
            return false;
        }
    }
    else if (s[i] == '}')
    {
        if (openBrackets.Count == 0)
        {
            return false;
        }
        if (openBrackets.Last() == '{')
        {
            openBrackets.RemoveAt(openBrackets.Count - 1);
        }
        else
        {
            return false;

        }
    }
    else
    {
        openBrackets.Add(s[i]);
    }

}
if (openBrackets.Count == 0)
{
    return true;

}
else
{
    return false;
}
    }
}
