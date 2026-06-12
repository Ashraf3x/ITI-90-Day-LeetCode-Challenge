// Author: Ashraf
// Link: https://leetcode.com/problems/contains-duplicate-ii/description/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        unordered_set<int> st;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > k) {
                st.erase(nums[i - k - 1]);
            }
            if (st.count(nums[i])) {
                return 1;
            }
            st.insert(nums[i]);
        }

        return 0;
    }
};