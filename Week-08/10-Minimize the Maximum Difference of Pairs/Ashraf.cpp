// Author: Ashraf
// https://leetcode.com/problems/minimize-the-maximum-difference-of-pairs/description/
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.back() - nums.front(), n = nums.size();
        while(l < r) {
            int m = l + (r - l) / 2, c = 0;
            for(int i = 0; i < n - 1; ++i) {
                if(nums[i+1] - nums[i] <= m) {
                    c++;
                    i++;
                }
            }
            if(c >= p) r = m;
            else l = m + 1;
        }
        return l;
    }
};