// Author: Ashraf
// https://leetcode.com/problems/reverse-bits/description/
// Time Complexity: O(32)
// Space Complexity: O(1)
class Solution {
public:
    int reverseBits(int n) {
        unsigned int num = n;
        unsigned int ans = 0;
        for (int i = 0; i < 32; i++) {
            ans = (ans << 1) | (num & 1);
            num >>= 1;
        }
        return ans;
    }
};