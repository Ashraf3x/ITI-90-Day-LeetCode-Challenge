// Author: Ashraf
// https://leetcode.com/problems/split-array-largest-sum/description/
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
   int l = 0, r = 0;
        for (int x : nums) {
            l = max(l, x);
            r += x;
        }
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int sum = 0, splits = 1;
            for (auto it : nums) {
                if (sum + it > mid) {
                    splits++;
                    sum = it;
                } else {
                    sum += it;
                }
            }
            if (splits > k) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return l;
    }
};