// Author: Ashraf
// https://leetcode.com/problems/bitwise-and-of-numbers-range/description/
// Time Complexity: O(1)
// Space Complexity: O(1)
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shifts = 0;
        while (left < right) {
            left >>= 1;
            right >>= 1;
            shifts++;
        }
        return left << shifts;
    }
};