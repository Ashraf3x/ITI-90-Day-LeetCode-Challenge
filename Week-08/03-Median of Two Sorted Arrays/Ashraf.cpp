// Author: Ashraf
// https://leetcode.com/problems/median-of-two-sorted-arrays/description/
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2,nums1);
        int m = nums1.size(), n = nums2.size(), l = 0, r = m;
        while (l <= r) {
            int i = (l + r) / 2, j = (m + n + 1) / 2 - i;
            if (i > 0 && j < n && nums1[i - 1] > nums2[j]) {
                r = i - 1;
            } else if (j > 0 && i < m && nums2[j - 1] > nums1[i]) {
                l = i + 1;
            } else {
                int maxLeft = (i == 0) ? nums2[j - 1] : (j == 0) ? nums1[i - 1] : max(nums1[i - 1], nums2[j - 1]);
                if ((m + n) % 2 != 0) return maxLeft;
                int minRight = (i == m) ? nums2[j] : (j == n) ? nums1[i] : min(nums1[i], nums2[j]);
                return (maxLeft + minRight) / 2.0;
            }
        }
        return 0;
    }
};