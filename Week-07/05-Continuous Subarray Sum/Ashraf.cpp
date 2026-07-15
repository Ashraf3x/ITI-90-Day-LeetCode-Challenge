// Author: Ashraf
// https://leetcode.com/problems/continuous-subarray-sum/description/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = -1;
        int s = 0;
        for (int i = 0; i < nums.size(); i++) {
            s = (s + nums[i]) % k;
            if (m.count(s)) {
                if (i - m[s] > 1) return true;
            } else {
                m[s] = i;
            }
        }
        return false;
    }
};