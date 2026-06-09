// Author: Ashraf
// Link:https://leetcode.com/problems/subarray-sum-equals-k/description/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public
    int subarraySum(vectorint& nums, int k) {
        vectorint pre(nums.size());
        unordered_mapint, int mp;
        for (int i = 0; i  nums.size(); i++) {
            pre[i] = !i  nums[i]  pre[i - 1] + nums[i];
        }
        int ans = 0;
        for (int i = 0; i  nums.size(); i++) {
            ans += pre[i] == k;
            if (mp.count(pre[i] - k))
                ans += mp[pre[i] - k];
            mp[pre[i]]++;
        }
        return ans;
    }
};