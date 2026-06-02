// Author: Ahmed Shalaby
// Problem: Baseball Game
// Link: https://leetcode.com/problems/baseball-game/
// Time: O(n)
// Space: O(n)
namespace LongestPalindrome
{
    public class Program
    {
        public static int CalPoints(string[] operations)
        {
            Stack<string> record = new Stack<string>();

            for (int i = 0; i < operations.Length; i++)
            {
                if (int.TryParse(operations[i], out int result))
                {
                    record.Push(result.ToString());
                }
                else if (operations[i] == "C")
                {
                    record.Pop();
                }
                else if (operations[i] == "D")
                {
                    string top = record.Pop();
                    record.Push(top);
                    record.Push((int.Parse(top) * 2).ToString());
                }
                else if (operations[i] == "+")
                {
                    string top = record.Pop();
                    string secondTop = record.Pop();
                    record.Push(secondTop);
                    record.Push(top);
                    record.Push((int.Parse(top) + int.Parse(secondTop)).ToString());
                }
            }
            int AA = record.Sum(x => int.Parse(x));
            return AA;
        }
        public static void Main(string[] args)
        {
            string[] arr = new string[] { "5", "-2", "4", "C", "D", "9", "+", "+" };
            int result = CalPoints(arr);
            Console.WriteLine(result);
        }
    }
}
