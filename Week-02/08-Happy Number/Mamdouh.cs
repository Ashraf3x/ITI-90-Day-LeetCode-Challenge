 public class Solution
 {
     public int DigitsSquareSum(int number)
     {
         int result = 0;
         while(number > 0)
         {
            result += (number % 10) * (number % 10);
             number /= 10;
         }
         return result;
     }

     public bool IsHappy(int n)
    {
        HashSet<int> set = new();
        while (n != 1)
        {
            n = DigitsSquareSum(n);
            if (!set.Add(n))
                return false;
            set.Add(n);
        }
        
        return true;
    }
 }
