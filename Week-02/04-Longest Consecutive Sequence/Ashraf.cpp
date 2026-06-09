// Author: Ashraf
// Link: https://leetcode.com/problems/longest-consecutive-sequence/description/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto& it : nums)mp[it]++;
        int mx = 0;
        for (auto& it : mp) {
            if (!mp.count(it.first - 1)) {
                int cur = it.first;
                int len = 1;
                while (mp.count(cur + 1))
                    cur++, len++;
                mx = max(mx, len);
            }
        }
        return mx;
    }
};