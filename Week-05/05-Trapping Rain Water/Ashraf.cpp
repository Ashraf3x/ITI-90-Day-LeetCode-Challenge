// Author: Ashraf
// Link: https://leetcode.com/problems/trapping-rain-water/description/
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int mx_l = 0, mx_r = 0, ans = 0;
        while (l < r) {
            if (height[l] < height[r]) {
                mx_l = max(mx_l, height[l]);
                ans += mx_l - height[l];
                l++;
            } else {
                mx_r = max(mx_r, height[r]);
                ans += mx_r - height[r];
                r--;
            }
        }
        return ans;
    }
};