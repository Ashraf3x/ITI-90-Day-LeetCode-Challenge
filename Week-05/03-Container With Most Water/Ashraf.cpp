// Author: Ashraf
// Link: https://leetcode.com/problems/container-with-most-water/
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int ans = 0;
        while (l < r) {
            ans = max(ans, min(height[l], height[r]) * (r - l));
            if (height[l] < height[r]) l++;
            else r--;
        }
        return ans;
    }
};
