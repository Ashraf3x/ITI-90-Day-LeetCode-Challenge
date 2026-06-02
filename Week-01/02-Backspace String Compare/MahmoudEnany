using System.Text;

public class Solution 
{
    public bool BackspaceCompare(string s, string t) 
    {
        return build(s) == build(t);
    }

    public string build(string s)
    {
        StringBuilder sb = new StringBuilder();
        foreach(var ch in s)
        {
            if(ch != '#')
            {
                sb.Append(ch);
            }
            else
            {
            if (sb.Length > 0)
            {
                sb.Length--;
            }
            }
        }
        return sb.ToString();
    }
}
