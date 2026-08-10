// Author: Ashraf
// https://leetcode.com/problems/single-number/description/
// Time Complexity: O(N)
// Space Complexity: O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int n : nums) res ^= n;
        return res;
    }
};