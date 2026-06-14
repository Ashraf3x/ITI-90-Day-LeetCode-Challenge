// Author: Ahmed Shalaby
// Problem: Happy Number
// Link: https://leetcode.com/problems/happy-number/
// Approach: HashSet / Cycle Detection
// Time Complexity: O(log n)
// Space Complexity: O(log n)

namespace HappyNumber
{
    public class Program
    {
        public static bool IsHappy(int n)
        {
            HashSet<int> set = new();
            while (n!=1)
            {
                if (set.Contains(n))
                {
                    return false;
                }

                set.Add(n);
                int sum = 0;
                while (n>0)
                {
                    int d = n % 10;
                    sum += d * d;
                    n = n / 10;
                }
                n = sum;
            }
            return true;
        }

        public static void Main(string[] args)
        {
            Console.WriteLine(IsHappy(19));
        }
    }
}
