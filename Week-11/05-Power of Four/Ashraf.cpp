// Author: Ashraf
// https://leetcode.com/problems/power-of-four/description/
// Time Complexity: O(N)
// Space Complexity: O(1)
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        while (n % 4 == 0) {
            n /= 4;
        }
        return n == 1;
    }
};