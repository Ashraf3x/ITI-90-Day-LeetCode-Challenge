// Author: Ashraf
// https://leetcode.com/problems/hamming-distance/description/
// Time Complexity: O(1)
// Space Complexity: O(1)
class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y;
        int count = 0;
        while (n > 0) {
            count += n % 2;
            n /= 2;
        }
        return count;
    }
};