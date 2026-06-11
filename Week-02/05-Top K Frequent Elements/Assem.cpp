// Author: Assem
// Problem:  Top K Frequent Elements
// Link: https://leetcode.com/problems/top-k-frequent-elements
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;

        for (auto num : nums)
        {
            mp[num]++;
        }

        priority_queue<pair<int, int>> pq;

        for (auto it : mp)
        {
            pq.push({it.second, it.first});
        }

        vector<int> ans;

        while (k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

int main()
{
    return 0;
}
