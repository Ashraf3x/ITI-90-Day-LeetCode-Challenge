// Author: Ashraf
// Link: https://leetcode.com/problems/intersection-of-two-arrays/description/
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        for (auto& it : nums1)mp[it]++;
        unordered_set<int> st;
        for (auto& it : nums2) {
            if (mp.count(it))
                st.insert(it);
        }
        vector<int> ans(st.begin(), st.end());
        return ans;
    }
};