// Author: Ashraf
// https://leetcode.com/problems/find-pivot-index/description/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n + 1);
        for (int i = 0; i < n; i++)
            pre[i + 1] = pre[i] + nums[i];
        for (int i = 0; i < n; i++) {
            int l = pre[i];
            int r = pre[n] - pre[i + 1];
            if (l == r)
                return i;
        }
        return -1;
    }
};