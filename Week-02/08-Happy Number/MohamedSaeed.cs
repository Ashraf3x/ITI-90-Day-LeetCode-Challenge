public class Solution {
    public bool IsHappy(int n) {
        if(n == 1 || n == 7) {
            return true;
        }
        while(n != 1 && n >= 10) {
            int s = 0;
            while(n != 0) {
                int d = n%10;
                s += d*d;
                n /= 10;
            }
            if(s == 1 || s == 7) {
                return true;
            }
            n = s;
        }
        return false;
    }
}
