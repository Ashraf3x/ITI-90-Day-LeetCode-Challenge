// Author: Ashraf
// https://leetcode.com/problems/number-of-1-bits/description/
// Time Complexity: O(N)
// Space Complexity: O(1)
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n > 0) {
            count += n % 2;
            n /= 2;
        }
        return count;
    }
};