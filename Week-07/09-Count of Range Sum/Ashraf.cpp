// Author: Ashraf
// https://leetcode.com/problems/count-of-range-sum/description/
// Time Complexity: O(n * log(n))
// Space Complexity: O(n)
class Solution {
public:
    int solve(vector<long long>& p, int l, int r, int lower, int upper) {
        if (r - l <= 1) return 0;
        int mid = l + (r - l) / 2;
        int ans = solve(p, l, mid, lower, upper) + solve(p, mid, r, lower, upper);
        int j = mid, k = mid;
        for (int i = l; i < mid; i++) {
            while (j < r && p[j] - p[i] < lower) j++;
            while (k < r && p[k] - p[i] <= upper) k++;
            ans += k - j;
        }
        inplace_merge(p.begin() + l, p.begin() + mid, p.begin() + r);
        return ans;
    }
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        vector<long long> p(n + 1, 0);
        for (int i = 0; i < n; i++) p[i + 1] = p[i] + nums[i];
        return solve(p, 0, n + 1, lower, upper);
    }
};