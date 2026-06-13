public class Solution {
    public bool IsHappy(int n) {

        while (n != 1)
        {
            if ( n == 20)
            {
                return false;
            }

            int sum = 0;

            while (n > 0)
            {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }

            n = sum;
        }

        return true;
    }
}
