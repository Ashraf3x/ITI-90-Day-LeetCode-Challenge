// Author: Ashraf
// https://leetcode.com/problems/sum-of-two-integers/description/
// Time Complexity: O(1)
// Space Complexity: O(1)
class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned int carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
    }
};