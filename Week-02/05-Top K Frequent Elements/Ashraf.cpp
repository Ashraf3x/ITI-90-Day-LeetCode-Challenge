// Author: Ashraf
// Link: https://leetcode.com/problems/intersection-of-two-arrays/description/
// Time Complexity: O(n * log(m))
// Space Complexity: O(n)
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (auto& it : nums)
            mp[it]++;

        priority_queue<pair<int, int>> pq;
        for (auto& [f, s] : mp) {
            pq.push({-s, f});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        vector<int> ans;
        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};